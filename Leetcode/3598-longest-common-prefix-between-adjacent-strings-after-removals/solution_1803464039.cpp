class Solution {
private:
    int findPrefix(string s, string t) {
        int ans = 0, i = 0, j = 0, n = s.size(), m = t.size();

        while(i < n && j < m) {
            if (s[i] == t[j]) {
                ans = ++i;
                j++;
            } else {
                break;
            }
        }

        return ans;
    }

public:
    vector<int> longestCommonPrefix(vector<string>& words) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = words.size();
        if (n == 1) return {0};

        vector<pair<int, int>> maximum;
        for (int i = 0; i < n - 1; i++) {
            int len = findPrefix(words[i], words[i + 1]);
            maximum.push_back({len, i});
        }

        sort(maximum.begin(), maximum.end(), greater<>());
        pair<int, int> maxi1 = maximum[0];
        pair<int, int> maxi2 = (maximum.size() > 1) ? maximum[1] : make_pair(0, 0);

        vector<int> ans(n);
        ans[0] = (maxi1.second == 0) ? maxi2.first : maxi1.first;

        for (int i = 1; i < n - 1; i++) {
            int len = findPrefix(words[i - 1], words[i + 1]);

            if (maxi1.second == i || maxi1.second + 1 == i) {
                ans[i] = max(len, maxi2.first);
            } else {
                ans[i] = max(len, maxi1.first);
            }
        }

        ans[n - 1] = (maxi1.second == n - 2) ? maxi2.first : maxi1.first;
        return ans;
    }
};