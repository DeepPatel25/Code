class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int left = 0, right = col - 1;
        int top = 0, bottom = row - 1;

        vector<int> ans;

        while(top <= bottom && left <= right) {
            
            // Right
            for(int i = left; i <= right; i++)
                ans.emplace_back(matrix[top][i]);
            top++;

            // Down
            for(int i = top; i <= bottom; i++)
                ans.emplace_back(matrix[i][right]);
            right--;

            // Left
            if(top <= bottom) {
                for(int i = right; i >= left; i--)
                    ans.emplace_back(matrix[bottom][i]);
                bottom--;
            }

            // Up
            if(left <= right) {
                for(int i = bottom; i >= top; i--)
                    ans.emplace_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};