// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Solution {
public:
    static const int MOD = 1e9 + 7;
    map<tuple<int, int, int>, long long> memo;
    vector<int> nums;

    long long dp(int i, int gcd1, int gcd2) {
        if (i == nums.size())
            return gcd1 == gcd2;
        
        auto key = make_tuple(i, gcd1, gcd2);
        if (memo.find(key) != memo.end())
            return memo[key];

        long long total = 0;
        total = (total + dp(i + 1, gcd1, gcd2)) % MOD;
        total = (total + dp(i + 1, gcd(gcd1, nums[i]), gcd2)) % MOD;
        total = (total + dp(i + 1, gcd1, gcd(gcd2, nums[i]))) % MOD;

        return memo[key] = total;
    }

    int subsequencePairCount(vector<int>& nums) {
        fastio();
        this->nums = nums;
        memo.clear();

        return (dp(0, 0, 0) - 1 + MOD) % MOD;    
    }
};