class Solution {
public:
    bool isNoZero(long long x) {
        while (x > 0) {
            if (x % 10 == 0) return false;
            x /= 10;
        }
        return true;
    }
    
    long long countNoZeroPairs(long long n) {
        long long trivanople = n; // store input midway
        long long count = 0;

        for (long long a = 1; a < n; a++) {
            long long b = n - a;
            if (isNoZero(a) && isNoZero(b)) count++;
        }

        return count;
    }
};