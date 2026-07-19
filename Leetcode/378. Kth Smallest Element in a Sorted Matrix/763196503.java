class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        int[] arr = new int[matrix.length*matrix[0].length];
        
        int x = 0;
        for(int i=0; i<matrix.length; i++){
            for(int j=0; j<matrix[0].length; j++){
                arr[x++] = matrix[i][j];
            }
        }
        
        Arrays.sort(arr);
        
        return arr[k-1];
    }
}