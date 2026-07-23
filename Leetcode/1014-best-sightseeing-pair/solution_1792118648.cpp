class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        // // Basic Naive Approach
        // int maxi = 0;

        // // Time Complexity - o(n2)
        // for (int i = 0; i < values.size(); i++) {
        //     for (int j = i + 1; j < values.size(); j++) {
        //         // check for all values
        //         maxi = max(maxi, values[i] + values[j] + i - j);
        //     }
        // }

        // // return maximum value
        // return maxi;

        // // Time - Optimization Approach
        // int maxi = 0, n = values.size();

        // // create a prefMax for storing maximum value before of current element
        // vector<int> prefMax(n, 0);
        // prefMax[0] = values[0];

        // for (int i = 1; i < n; i++) {
        //     prefMax[i] = max(prefMax[i - 1], values[i] + i);
        //     maxi = max(maxi, prefMax[i - 1] + values[i] - i);
        // }

        // return maxi;

        // Time + Space Optimization Solution
        int maxi = 0, n = values.size(), int prefMax = nums[0];

        for (int i = 1; i < n; i++) {
            prefMax = max(prefMax, nums[i] + i);
            maxi = max(maxi, prefMax + nums[i] - i);
        }

        return maxi;
    }
};