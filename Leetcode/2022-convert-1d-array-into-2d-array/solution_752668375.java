class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        if(original.length <= m*n){
            int[][] arr = new int[m][n];

            int i = 0;
            int k = 0;
            while(i<m){
                int j = 0;
                while(j<n){
                    arr[i][j] = original[k++];
                    j++;
                }
                i++;
            }
            
            return arr;
        } else {
            return new int[0][0];
        }
    }
}