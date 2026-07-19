class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans = "";
        int n = s.size();
        for(int i = 0; i < n; i++)
            ans.push_back(s[(i + k) % n]);
        return ans;
    }
};