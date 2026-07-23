class Solution {
    public String multiply(String num1, String num2) {
        long a = Long.parseLong(num1);
        long b = Long.parseLong(num2);
        
        String total = Long.toString(a*b);
        
        return total;
    }
}