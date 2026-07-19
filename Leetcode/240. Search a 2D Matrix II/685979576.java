class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        boolean a = false;
        int i=matrix.length-1;
        int j=0;
        int k=matrix[0].length;
        
        while((i>=0) && (j<=k-1)){
            if(matrix[i][j]==target){
                a = true;
                return a;
            }
            else if(target<matrix[i][j]){
                i--;
            }
            else{
                j++;
            }
        }
        return a;
    }
}