class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> temp(26, 0);

        for(int i = 0; i < words[0].size(); i++) {
            temp[words[0][i] - 'a']++;
        }

        for(int i = 1; i < words.size(); i++) {
            vector<int> curr(26, 0);
            for(auto s: words[i]) {
                curr[s - 'a']++;
            }

            for(int i = 0; i < 26; i++) {
                temp[i] = min(temp[i], curr[i]);
            }
        }

        vector<string> ans;
        for(int i = 0; i < 26; i++) {
            while(temp[i]--) {
                string temp2 = "";
                temp2 += 'a' + i;
                ans.push_back(temp2);
            }
        }

        return ans;
    }
};