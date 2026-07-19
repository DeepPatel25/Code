class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int rightSum = 0, leftSum = 0, n = arr.size();

        for (int val: arr)
            rightSum += val;

        for(int i = 0; i < n - 2; i++) {
            rightSum -= arr[i];
            leftSum += arr[i];

            if (2 * leftSum == rightSum) {
                int nextRightSum = rightSum, nextLeftSum = 0;

                for (int j = i + 1; j < n - 1; j++) {
                    nextRightSum -= arr[j];
                    nextLeftSum += arr[j];

                    if (leftSum == nextLeftSum && nextLeftSum == nextRightSum) return true;
                }
            }
        }

        return false;
    }
};