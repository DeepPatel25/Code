class Solution {
private:
    vector<bool> sieve(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return isPrime;
    }
    
    int reverseNum(int n) {
        int r = 0;
        while (n) {
            r = r * 10 + (n % 10);
            n /= 10;
        }

        return r;
    }
    
public:
    int sumOfPrimesInRange(int n) {
        int r = reverseNum(n);
        
        int l = min(n, r);
        int h = max(n, r);
        
        vector<bool> isPrime = sieve(h);
        long long sum = 0;
        for (int i = l; i <= h; i++) {
            if (isPrime[i]) {
                sum += i;
                // cout << i << endl;
            }
        }

        return sum;
    }
};