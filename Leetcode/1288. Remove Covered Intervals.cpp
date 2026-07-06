class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int>& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });

        vector<vector<int>> temp;
        temp.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            int j = temp.size() - 1;
            int a = intervals[i][0], b = intervals[i][1];

            bool canRemove = false;
            while (j >= 0) {
                int c = temp[j][0], d = temp[j][1];
                if (a >= c and a <= d and b >= c and b <= d) {
                    canRemove = true;
                    break;
                }

                j--;
            }

            if (!canRemove)
                temp.push_back(intervals[i]);
        }

        return temp.size();
    }
};