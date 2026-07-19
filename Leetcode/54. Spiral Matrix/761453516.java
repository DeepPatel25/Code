class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        int startRowIdx = 0;
        int startColIdx = 0;
        int endRowIdx = matrix.length;
        int endColIdx = matrix[0].length;
        
        while((startRowIdx < endRowIdx) && (startColIdx < endColIdx)){
            for(int i = startColIdx; i<endColIdx; i++){
                ans.add(matrix[startRowIdx][i]);
            }
            startRowIdx++;
            for(int i = startRowIdx; i<endRowIdx; i++){
                ans.add(matrix[i][endColIdx-1]);
            }
            endColIdx--;
            
            if(startRowIdx<endRowIdx){
                for(int i=endColIdx-1; i>=startColIdx; i--){
                    ans.add(matrix[endRowIdx-1][i]);
                }
                endRowIdx--;
            }
            
            if(startColIdx<endColIdx){
                for(int i=endRowIdx-1; i>=startRowIdx; i--){
                    ans.add(matrix[i][startColIdx]);
                }
                startColIdx++;
            }
        }
        
        return ans;
    }
}