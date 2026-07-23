class Solution {
    public int lengthOfLastWord(String s) {
        int count = 0;
        String x = s.trim();
        
        int j = x.length()-1;
        
        while(x.charAt(j)!=' '){
            count++;
            j--;
            if(j<0){
                break;
            }
        }
        
        return count;
    }
}