class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> ans(n, 0);

        int j = 0;
        int incrVal = 1;
        while(true) {
            ans[j]++;
            j = (j + (incrVal++) * k) % n;

            if(ans[j] >= 1) break;
        }

        vector<int> res;
        for(int i = 0; i < n; i++) {
            if(ans[i] == 0) {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};