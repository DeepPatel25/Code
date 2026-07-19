class Solution {
typedef long long int ll;

public:
    long long maximumTotalDamage(vector<int>& power) {
        map<ll, ll> freq;
        for (auto el: power) freq[el]++;
        unordered_map<int, ll> dp;

        ll n = power.size(), ans = 0, prevEl, backEl = 0;
        for (auto [el, fr]: freq) {
            auto backIt = freq.lower_bound(el - 2);
            if (backIt != freq.begin()) backEl = (*(--backIt )).first;
            dp[el] = max(dp[prevEl], el * fr + dp[backEl]);
            ans = max(ans, dp[el]);
            prevEl = el;
        }

        return ans;
    }
};