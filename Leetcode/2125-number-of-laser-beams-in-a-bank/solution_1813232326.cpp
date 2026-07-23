class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<int> counterBeans;
        int n = bank.size(), m = bank[0].size();

        for (int i = 0; i < n; i++) {
            int countOne = 0;

            for (int j = 0; j < m; j++)
                if (bank[i][j] == '1') 
                    countOne++;
            
            if (countOne > 0) counterBeans.push_back(countOne);
        }

        int ans = 0;
        for (int i = 0; i + 1 < counterBeans.size(); i++) {
            ans += (counterBeans[i] * counterBeans[i + 1]);
        }

        return ans;
    }
};