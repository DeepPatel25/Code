class Solution {
public:
    string sortString(string s) {
        vector<int> mp(26, 0);
        int count = s.size();

        for (char ch: s)
            mp[ch - 'a']++;
        
        bool flag = true;
        string ans = "";

        while(count > 0) {
            if (flag) {
                for (int i = 0; i < 26; i++) {
                    if (mp[i] > 0) {
                        ans += 'a' + i;
                        mp[i]--;
                        count--;
                    }
                }
            } else {
                for (int i = 25; i >= 0; i--) {
                    if (mp[i] > 0) {
                        ans += 'a' + i;
                        mp[i]--;
                        count--;
                    }
                }
            }

            flag = !flag;
        }

        return ans;
    }
};