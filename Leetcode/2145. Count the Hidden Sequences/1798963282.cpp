class Solution {
private:
    bool isValid(int j, int lower, int upper, vector<int>& differences) {
        int n = differences.size(), sum = j;

        for (int i = 0; i < n; i++) {
            sum += differences[i];

            if (sum < lower || sum > upper)
                return false;
        }

        return true;
    }

public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int ans = 0, n = differences.size();

        int start = lower, end = upper;
        int lowerBound = INT_MIN, upperBound = INT_MIN;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if (isValid(mid, lower, upper, differences)) {
                lowerBound = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        start = lower, end = upper;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if (isValid(mid, lower, upper, differences)) {
                upperBound = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return lowerBound != INT_MIN ? upperBound - lowerBound + 1 : 0;
    }
};