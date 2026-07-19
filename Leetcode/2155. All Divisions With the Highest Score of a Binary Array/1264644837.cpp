class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        int countOne = 0;

        // Calculate total number of 1s in the array
        for (int num : nums) {
            if (num == 1) countOne++;
        }

        int countZero = 0;
        int maxScore = 0;
        vector<int> result;

        // Iterate through the array to calculate score for each index
        for (int i = 0; i <= n; ++i) {
            int score = countZero + countOne;
            if (score > maxScore) {
                maxScore = score;
                result = {i};
            } else if (score == maxScore) {
                result.push_back(i);
            }

            if (i < n) {
                if (nums[i] == 0) {
                    countZero++;
                } else {
                    countOne--;
                }
            }
        }

        return result;
    }
};
