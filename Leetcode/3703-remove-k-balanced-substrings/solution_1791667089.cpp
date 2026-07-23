class Solution {
public:
    string removeSubstring(string s, int k) {
        vector<char> vi;

        for (char c : s) {
            if (c == ')') {
                if ((int)vi.size() >= k) {
                    bool allExist = true;
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
                vi.push_back(')'); // keep the ')' if no removal
            } else {
                vi.push_back('(');
            }
        }

        return string(vi.begin(), vi.end());
    }
};