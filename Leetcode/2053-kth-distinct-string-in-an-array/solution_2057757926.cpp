class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;

        for (string &s: arr) {
            mp[s]++;
        }

        for (string &s: arr) {
            if (mp[s] == 1) {
                if (k == 1)
                    return s;
                k--;
            }
        }

        return "";
    }
};