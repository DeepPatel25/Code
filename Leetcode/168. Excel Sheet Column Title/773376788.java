class Solution {
    public String convertToTitle(int columnNumber) {
        Map<Integer,Character>map=new HashMap<>();
        char ch = 'A';
        for(int i=1;i<=26;i++){
            map.put(i,ch);
            ch++;
        }
        String res="";
        while(columnNumber>0){
            int rem = (columnNumber%26 == 0) ? 26 : columnNumber%26 ;
            res= map.get(rem)+res;
            columnNumber= (columnNumber%26 == 0)?(columnNumber/26 -1):columnNumber/26;     
        }
        return res;
    }
}