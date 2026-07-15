class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0, sumEven = 0;

        for (int i = 1, j = 2; n > 0; i += 2, j += 2, n--) {
            sumOdd += i;
            sumEven += j;
        }

        return __gcd(sumOdd, sumEven);
    }
};
