class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = 0;

        for (int val: arr)
            totalSum += val;

        if (totalSum % 3 != 0) return false;

        int sum = 0, count = 0;
        int target = totalSum / 3;

        for (int val: arr) {
            sum += val;

            if (sum == target) {
                sum = 0;
                count++;
            }
        }

        return count >= 3;
    }
};