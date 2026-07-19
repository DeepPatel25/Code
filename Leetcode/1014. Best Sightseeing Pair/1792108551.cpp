class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi = 0;

        for (int i = 0; i < values.size(); i++) {
            for (int j = i + 1; j < values.size(); j++) {
                maxi = max(maxi, values[i] + values[j] + i - j);
            }
        }
        
        return maxi;
    }
};