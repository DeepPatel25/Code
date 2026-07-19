class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int start = max(1, n - k), end = n + k;
        int sum = 0;

        while (start <= end) {
            if ((n & start) == 0 and abs(n - start) <= k)
                sum += start;

            start++;
        }

        return sum;
    }
};