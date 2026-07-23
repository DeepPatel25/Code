class Solution {
public:
    string removeSubstring(string s, int k) {
        vector<char> vi;
        
        for (char c : s) {
            if (c == ')') {
                if ((int)vi.size() >= k) {
                    bool allExist = true;
                    // check last k chars
                    for (int j = (int)vi.size() - k; j < (int)vi.size(); j++) {
                        if (vi[j] != '(') {
                            allExist = false;
                            break;
                        }
                    }
                    if (allExist) {
                        for (int j = 0; j < k; j++) vi.pop_back();
                        continue; // skip pushing ')'
                    }
                }
            }
            // push current character always if not removed
            vi.push_back(c);
        }

        return string(vi.begin(), vi.end());
    }
};