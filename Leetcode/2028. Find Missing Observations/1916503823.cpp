class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> res(n, 0);
        int remainingCount = mean * (rolls.size() + n);
        
        for (int i: rolls)
            remainingCount -= i;
        
        if (remainingCount > n * 6 || remainingCount <= 0) return {};

        for (int i = 0; i < res.size(); i++)
            res[i] = remainingCount / n;
        
        int mod = remainingCount % n;
        int j = 0;
        while (mod--) {
            res[j++]++;
        }

        return res;
    }
};