class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int size = arr.size();
        int sum = 0;

        for (int i = 0; i < size; i++) {
            int tempSum = 0, count = 0;

            for (int j = i; j < size; j++) {
                tempSum += arr[j];
                ++count;

                if (count & 1)
                    sum += tempSum;
            }
        }

        return sum;
    }
};