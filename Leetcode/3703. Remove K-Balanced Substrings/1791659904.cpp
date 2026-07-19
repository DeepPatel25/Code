class Solution {
public:
    string removeSubstring(string s, int k) {
        vector<char> vi;

        for(int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                vi.push_back('(');
            else {
                if (vi.size() >= k) {
                    bool allExist = true;

                    // check last k chars safely
                    for (int temp = (int)vi.size() - k; temp < (int)vi.size(); temp++) {
                        if (vi[temp] != '(') {
                            allExist = false;
                            break;
                        }
                    }

                    if (allExist) {
                        int temp = k;
                        while(temp > 0) {
                            vi.pop_back();
                            temp--;
                        }
                    }
                }
            }
        }

        return vi.size() > 0 ? string(vi.begin(), vi.end()) : "";
    }
};