class Solution {
public:
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int mini = INT_MAX;
        solve(0, mat, target, 0, mini);
        return mini;
    }

private:
    void solve(int row, vector<vector<int>>& mat, int target, int sum, int& mini) {
        if (row == mat.size()) {
            mini = min(mini, abs(target - sum));
            return;
        }

        for (int col = 0; col < mat[row].size(); col++) {
            solve(row + 1, mat, target, sum + mat[row][col], mini);
        }
    }
};