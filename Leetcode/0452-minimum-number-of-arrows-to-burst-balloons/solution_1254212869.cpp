class Solution {
public:
    static bool compare(const vector<int> &a, const vector<int> &b) {
        if(a[0] < b[0]) return true;
        if(a[0] == b[0]) return a[1] < b[1];
        return false;
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);

        int count = 0;
        int n = points.size();
        int i = 0, j = 0;

        while(i < n) {
            j = i + 1;            
            while(j < n && points[j][0] <= points[i][1] && points[i][1] <= points[j][1]) {
                j++;
            }
            count++;
            i = j;
        }

        return count;

        return -1;
    }
};