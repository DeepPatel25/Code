class Solution {
private:
    int reverse(int n) {
        int ans = 0;

        while (n) {
            ans = ans * 10 + (n % 10);
            n /= 10;
        }

        return ans;
    }

public:
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};