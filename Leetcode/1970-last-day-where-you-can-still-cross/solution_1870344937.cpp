class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int low = 0, high = cells.size();
        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if(check(mid, row, col, cells)) {
                ans = max(ans, mid);
                low = mid + 1;
            } else {
                high = mid + 1;
            }
        }

        return ans;
    }
};