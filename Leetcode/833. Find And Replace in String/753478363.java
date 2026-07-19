class Solution {
    public String findReplaceString(String s, int[] indices, String[] sources, String[] targets) {
        String temp = s;
        for(int i=0; i<indices.length; i++){
            if(indices[i]==temp.indexOf(sources[i])){
                s = s.replace(sources[i],targets[i]);
            }
        }
        
        return s;
    }
}