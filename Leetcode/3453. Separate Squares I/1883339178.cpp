class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double area = 0;
        int mini = INT_MAX, maxi = INT_MIN;

        for (auto it: squares) {
            area += 1LL * it[2] * it[2];
            mini = min(mini, it[1]);
            maxi = max(maxi, it[1] + it[2]);
        }

        area /= 2;
        int left = mini, right = maxi;
        double below = 0;
        int y = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            double a = 0;

            for (auto it: squares) {
                int y1 = it[1];
                
                if (y1 >= mid)
                    continue;
                
                int y2 = min(mid, y1 + it[2]);
                a += 1LL * (y2 - y1) * it[2];
            }

            if (area > a) {
                left = mid + 1;
                below = a;
                y = mid;
            } else if (area <= a) {
                right = mid - 1;
            }
        }

        double a = 0;
        for (auto it: squares) {
            int y1 = it[1];
            
            if (y1 > y)
                continue;
            
            int y2 = y1 + it[2];
            
            if (y2 > y)
                a += it[2];
        }

        return y + (1.0 / a) * (area - below);
    }
};