class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());

        int total = 0;
        int j = 0;

        int n = g.size();
        int m = s.size();

        for(int i = 0; i < n; i++) {
            if(j < m && g[i] <= s[j]) {
                total++;
                j++;
            }
        }

        return total;
    }
};