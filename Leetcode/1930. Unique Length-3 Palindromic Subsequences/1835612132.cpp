class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char, vector<int>> mp;
        unordered_set<string> ust;

        for (int i = 0; i < s.size(); i++)
            mp[s[i]].push_back(i);

        for (auto m: mp) {
            if (m.second.size() >= 2) {
                int i = m.second[0] + 1, j = m.second[m.second.size() - 1];

                if (i == j) continue;

                string temp = "___";
                temp[0] = m.first;
                temp[2] = m.first;

                while(i < j) {
                    temp[1] = s[i++];
                    ust.insert(temp);
                }
            }
        }

        return ust.size();
    }
};