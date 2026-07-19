class Solution {
    public int[][] colorBorder(int[][] grid, int row, int col, int color) {
        // For row Color
        for(int i=0; i<grid[row].length; i++){
            grid[row][i] = color;
        }
        
        // For Column Color
        for(int i=0; i<grid.length; i++){
            grid[i][col] = color;
        }
        
        return grid;
    }
}