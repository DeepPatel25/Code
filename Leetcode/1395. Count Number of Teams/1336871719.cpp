class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans = 0;

        for(int i = 0; i < n - 1; i++) {
            int ls = 0, ll = 0, rs = 0, rl = 0;

            // Left
            for(int j = 0; j < i; j++) {
                if(rating[j] > rating[i]) ll++;
                else if(rating[j] < rating[i]) ls++;
            }

            for(int j = i + 1; j < n; j++) {
                if(rating[j] > rating[i]) rl++;
                else if(rating[j] < rating[i]) rs++;
            }

            ans += (ls * rl) + (ll * rs);
        }

        return ans;
    }
};