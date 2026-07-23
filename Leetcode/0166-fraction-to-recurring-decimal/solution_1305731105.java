class Solution {
    public String fractionToDecimal(int numerator, int denominator) {
        StringBuilder result = new StringBuilder();

        String sign = (numerator < 0 == denominator < 0 || numerator == 0) ? "" : "-";
        long num = Math.abs((long) numerator);
        long den = Math.abs((long) denominator);

        result.append(sign);
        result.append(num / den);

        long remainder = num % den;

        if(remainder == 0) 
            return result.toString();

        result.append(".");

        HashMap<Long, Integer> remainderMap = new HashMap<Long, Integer>();

        while(!remainderMap.containsKey(remainder)) {
            remainderMap.put(remainder, result.length());
            result.append(10 * remainder / den);
            remainder = 10 * remainder % den;
        }

        int repeatingNumberIndex = remainderMap.get(remainder);

        result.insert(repeatingNumberIndex, "(");
        result.append(")");

        return result.toString().replace("(0)", "");
    }
}