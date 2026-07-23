class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        int[] arr = new int[matrix.length*matrix[0].length];
        
        int e = 0;
        for(int i=0; i<matrix.length; i++){
            for(int j=0; j<matrix[0].length; j++){
                arr[e++] = matrix[i][j];
            }
        }
        
        for(int i=0; i<k; i++){
            int min = arr[i];
            int j = i;
            for(int x = i+1; x<arr.length; x++){
                if(min>arr[x]){
                    min = arr[x];
                    j = x;
                }
            }
            if(i!=j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        return arr[k-1];
    }
}