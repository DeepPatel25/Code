class Solution {
    public boolean isNumber(String s) {
        try{
            double ans = Double.parseDouble(s);
            return true;
        } 
        catch(Exception e){
            return false;
        }
    }
}