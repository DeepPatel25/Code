class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int size = pref.size();
        vector<int> ans(size, 0);
        ans[0] = pref[0];

        for(int i = 1; i < size; i++)
            ans[i] = pref[i - 1] ^ pref[i];

        return ans;
    }
};