class Solution {
private:
    bool is_prime(int n) {
        if (n < 2) return false;

        for (int i = 2; i * i < n; i++)
            if (n % i == 0) return false;
        
        return true;
    }

public:
    int largestPrime(int n) {
        int ans = 2, x = 3, res = 2;

        if (n == 1) return 0;
        while(ans <= n) {
            if (is_prime(ans)) res = max(res, ans);
            if (is_prime(x)) ans += x;
        }

        return res;
    }
};