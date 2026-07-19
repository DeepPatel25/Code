class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int tempSum = 0;

            for (int j = 1; j * j <= nums[i]; j++) {
                if (nums[i] % j == 0) {
                    tempSum += j;
                    count++;

                    if (nums[i] / j != j) {
                        count++;
                        tempSum += (nums[i] / j);
                    }
                }
            }

            if (count == 4) {
                sum += tempSum;
            }

            cout << endl;
        }

        return sum;
    }
};