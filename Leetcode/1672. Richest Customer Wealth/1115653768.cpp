class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        int row = accounts.size();
        int col = accounts[0].size();

        for(int i = 0; i < row; i++) {
            int sum = 0;
            for(int j = 0; j < col; j++)
                sum += accounts[i][j];
            if(sum > maxi) maxi = sum;
        }

        return maxi;
    }
};