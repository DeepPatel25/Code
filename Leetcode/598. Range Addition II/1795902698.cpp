class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minM = m, minN = n;

        for (vector<int> &q: ops) {
            minM = min(minM, q[0]);
            minN = min(minN, q[1]);
        }

        return minM * minN;
    }
};