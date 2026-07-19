class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        
        for (int i = 0; i < s.size();) {
            string temp = "";
            int a = k;

            while(a-- > 0) {
                if (i < s.size()) {
                    temp.push_back(s[i++]);
                } else {
                    temp.push_back(fill);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};