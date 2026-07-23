class Solution {
public:
    int countDigitOne(int n) {
        int ans = 0;
        
        if(n <= 0) return 0;
        if(n <= 9) return 1;

        unordered_map<int, int> mp;
        mp[9] = 1;

        for(int i = 9; i < (INT_MAX - 9) / 10; i = 10 * i + 9) {
            mp[i + 1] = mp[i] * 10 + (i + 1);
        }

        int temp = n;
        int divisor = 1;

        while(temp / 10) {
            temp /= 10;
            divisor *= 10;
        }

        int firstDig = n / divisor;
        int rem = n % divisor;

        // calculate ans
        ans += mp[divisor - 1] * firstDig;
        ans += firstDig > 1 ? divisor : 0;
        ans += firstDig == 1 ? rem + 1 : 0;
        ans += countDigitOne(rem);

        return ans;
    }
};