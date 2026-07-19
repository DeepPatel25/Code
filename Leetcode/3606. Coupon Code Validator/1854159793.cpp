class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> result;
        map<string, vector<string>> mp;
        unordered_set<string> st = {"electronics", "grocery", "pharmacy", "restaurant" };

        for (int i = 0; i < code.size(); i++) {
            if (isActive[i] && st.find(businessLine[i]) != st.end() && code[i].size() > 0) {
                bool isValid = true;
                
                for (char ch: code[i]) {
                    if (isalnum(ch) or ch == '_')
                        continue;
                    
                    isValid = false;
                    break;
                }

                if (isValid)
                    mp[businessLine[i]].push_back(code[i]);
            }
        }

        for (auto it: mp) {
            sort(it.second.begin(), it.second.end());
            result.insert(result.end(), it.second.begin(), it.second.end());
        }

        return result;
    }
};