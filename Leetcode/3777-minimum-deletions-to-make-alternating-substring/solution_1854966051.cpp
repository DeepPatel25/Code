class Solution {
public:
    vector<int> minDeletions(string s, vector<vector<int>>& queries) {
        vector<int> ans;
        
        for (auto it: queries) {
            int a = it[0];

            if (a == 1) {
                int j = it[1];
                s[j] = s[j] == 'A' ? 'B' : 'A';
            } else {
                int l = it[1], r = it[2];
                int minDeleteCount = 0;
                
                for (int i = l; i < r; i++) {
                    if (s[i] == s[i + 1])
                        minDeleteCount++;
                }

                ans.push_back(minDeleteCount);
            }
        }

        return ans;
    }
};