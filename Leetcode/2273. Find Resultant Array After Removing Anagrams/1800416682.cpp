class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<string> ans;
        ans.push_back(words[0]);

        for (int i = 1; i < words.size(); i++) {
            string a = words[i], b = ans.back();
            sort(a.begin(), a.end()), sort(b.begin(), b.end());
            if (a != b) ans.push_back(words[i]);
        }

        return ans;
    }
};