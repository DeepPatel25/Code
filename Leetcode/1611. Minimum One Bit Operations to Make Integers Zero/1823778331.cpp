#define ll long long int

class Solution {
public:
    int minimumOneBitOperations(int n) {
        vector<ll> f(31, 0);
        f[0] = 1;

        for (int i = 1; i <= 30; i++) {
            f[i] = 2 * f[i - 1] + 1;
        }

        int ans = 0;
        bool flag = false;

        for (int i = 30; i >= 0; i--) {
            if ((1 << i) & n) {
                flag = !flag;
                if (flag)
                    ans += f[i];
                else
                    ans -= f[i];
            }
        }

        return ans;
    }
};