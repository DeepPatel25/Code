class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int n = path.size();

        for(int i = 0; i < n; i++) {
            string str = "";

            if(path[i] == '/') {
                continue;
            }

            while(i < n && path[i] != '/') {
                str += path[i++];
            }

            if(str == "..") {
                if(!st.empty()) {
                    st.pop();
                }
            } else if(str == ".") {
                continue;
            } else {
                st.push(str);
            }
        }

        string ans = "";
        while(!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        return ans.size() > 0 ? ans : "/";
    }
};