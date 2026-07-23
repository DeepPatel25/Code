class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string, int> mp;
        int n = word.size(), mx = 0;

        for (int i = 0; i < n; i += k) {
            string s = word.substr(i, k);
            mp[s]++;
            mx = max(mx, mp[s]);
        }

        return (n / k - mx);
    }
};