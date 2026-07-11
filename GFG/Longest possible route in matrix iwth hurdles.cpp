class Solution {
  private:
    void solve(vector<vector<int>>& mat, int xs, int ys, int& xd, int& yd, int& maxi, int& maxDist, int sum,
        vector<vector<bool>>& visited) {
        if (xs < 0 || ys < 0 || xs >= mat.size() || ys >= mat[0].size() || mat[xs][ys] == 0 
            || sum > maxDist || visited[xs][ys])
            return;
        
        if (xs == xd and ys == yd) {
            maxi = max(maxi, sum);
            return;
        }
        
        sum += 1;
        visited[xs][ys] = true;
        
        solve(mat, xs + 1, ys, xd, yd, maxi, maxDist, sum, visited);
        solve(mat, xs - 1, ys, xd, yd, maxi, maxDist, sum, visited);
        solve(mat, xs, ys + 1, xd, yd, maxi, maxDist, sum, visited);
        solve(mat, xs, ys - 1, xd, yd, maxi, maxDist, sum, visited);
        
        sum -= 1;
        visited[xs][ys] = false;
    }
    
  public:
    int longestPath(vector<vector<int>>& mat, int xs, int ys, int xd, int yd) {
        int row = mat.size(), col = mat[0].size();
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        
        int maxDist = 0;
        
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                if (mat[i][j] == 1)
                    maxDist++;
        
        int maxi = -1, sum = 0;
        solve(mat, xs, ys, xd, yd, maxi, maxDist, sum, visited);
        return maxi;
    }
};
