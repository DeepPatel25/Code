class Solution {
    public boolean isNumber(String s) {
        if(s=="Infinity" || s=="-Infinity") return false;
        
        try{
            double ans = Double.parseDouble(s);
            return true;
        } 
        catch(Exception e){
            return false;
        }
    }
}