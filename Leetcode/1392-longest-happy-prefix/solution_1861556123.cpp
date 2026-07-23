class Solution {
public:
    string longestPrefix(string s) {
        map<char, vector<int>> mp;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == s[0])
                mp[s[i]].push_back(i);
        }

        auto it = mp[s[0]];

        if (it.size() == 1) {
            return "";
        }

        string ans = "";
        for (int idx = it.size() - 1; idx > 0; idx--) {
            int i = it[idx];
            int j = 0;
            
            while(i < s.size()) {
                if (s[i] == s[j]) {
                    i++; j++;
                }
            }

            if (i == s.size()) {
                string temp = s.substr(0, j);
                if (ans.size() < temp.size())
                    ans = temp;
            }
        }

        return ans;
    }
};