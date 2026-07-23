#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static const int MOD = 1e9 + 7;

    struct TupleHash {
        size_t operator()(const tuple<int,int,int>& t) const {
            auto [a,b,c] = t;

            size_t h1 = hash<int>()(a);
            size_t h2 = hash<int>()(b);
            size_t h3 = hash<int>()(c);

            return h1 ^ (h2 << 1) ^ (h3 << 2);
        }
    };

    vector<int> nums;

    unordered_map<tuple<int,int,int>, long long, TupleHash> memo;


    int dp(int i, int g1, int g2) {

        if (i == nums.size()) {
            return g1 == g2 ? 1 : 0;
        }

        auto key = make_tuple(i, g1, g2);

        if (memo.find(key) != memo.end())
            return memo[key];


        long long ans = 0;

        // skip current element
        ans += dp(i + 1, g1, g2);

        // add to first subsequence
        ans += dp(i + 1, gcd(g1, nums[i]), g2);

        // add to second subsequence
        ans += dp(i + 1, g1, gcd(g2, nums[i]));


        return memo[key] = ans % MOD;
    }


    int subsequencePairCount(vector<int>& nums) {
        this->nums = nums;

        memo.clear();
        memo.reserve(1000000);

        return (dp(0,0,0) - 1 + MOD) % MOD;
    }
};