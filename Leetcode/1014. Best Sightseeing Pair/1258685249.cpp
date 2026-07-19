class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi = -1;
        int n = values.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                maxi = max(maxi, values[i] + values[j] + i - j);
            }
        }

        return maxi;
    }
};