class Solution {
public:
    #define ll long long
    #define debug(x) cout << #x << " is: " << x << endl;

    vector<long long> countStableSubarrays(vector<int>& nums, vector<vector<int>>& queries) {
        ll n = nums.size();
        vector<ll> ans;
        int last = nums[0];
        nums[0] = 1;

        vector<ll> block;
        vector<pair<ll, ll>> dj;
        unordered_map<ll, ll> mp;
        ll bl = 0;
        mp[0] = bl;
        ll len = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] >= last) {
                last = nums[i];
                mp[i] = bl;
                len++;
            } else {
                block.push_back(len * (len + 1) / 2);
                dj.push_back({i - 1 - len + 1, i - 1});
                len = 1;
                last = nums[i];
                bl++;
                mp[i] = bl;
            }
        }

        block.push_back(len * (len + 1) / 2);
        dj.push_back({n - 1 - len + 1, n - 1});

        ll sz = block.size();
        vector<ll> pref(sz);
        pref[0] = block[0];

        for(int i = 1; i < sz; i++) {
            pref[i] = pref[i - 1] + block[i];
        }

        for (auto&x : queries) {
            ll l = x[0], r = x[1];
            ll lb = mp[l], rb = mp[r];

            if (lb == rb) {
                ll len = r - l + 1;
                ans.push_back(len * (len + 1) / 2);
                continue;
            }

            ll sm = 0;
            if (abs(lb - rb) >= 2) {
                sm = pref[rb - 1] - pref[lb];
            }

            auto& xx = dj[lb];
            ll len = xx.second - l + 1;
            sm += len * (len + 1) / 2;

            auto& y = dj[rb];
            len = r - y.first + 1;
            sm += len * (len + 1) / 2;
            ans.push_back(sm);
        }

        return ans;
    }
};