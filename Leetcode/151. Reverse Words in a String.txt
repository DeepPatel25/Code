class Solution {
    public String reverseWords(String s) {
        String arr[]=s.trim().replaceAll(" +", " ").split(" ");
        StringBuilder sb=new StringBuilder();
        for(int i=arr.length-1;i>=0;i--){
        if(arr[i].equals(" ")){
            continue;
        }
            else{
                sb.append(arr[i]);
                  if(i!=0){
                    sb.append(" ");
                }
            }
        }
   return sb.toString();
    }
}