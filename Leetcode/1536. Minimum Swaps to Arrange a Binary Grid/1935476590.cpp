class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> zeros(n);

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = n - 1; j >= 0 and grid[i][j] == 0; j--)
                count++;
            
            zeros[i] = count;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            int req = n - 1 - i;
            int j = i;

            while (j < n and zeros[j] < req)
                j++;
            
            if (j == n)
                return -1;
            
            while (j > i) {
                swap(zeros[j], zeros[j - 1]);
                swaps++; j--;
            }
        }

        return swaps;
    }
};