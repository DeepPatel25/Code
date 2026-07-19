class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        int n = path.size();
        
        for (int i = 0; i < n; ) {
            while (i < n && path[i] == '/') {
                ++i;
            }
            if (i == n) break;
            int start = i;
            while (i < n && path[i] != '/') {
                ++i;
            }
            string str = path.substr(start, i - start);
            if (str == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } else if (str != ".") {
                st.push_back(str);
            }
        }

        if (st.empty()) return "/";
        
        stringstream ss;
        for (const auto& dir : st) {
            ss << '/' << dir;
        }
        
        return ss.str();
    }
};
