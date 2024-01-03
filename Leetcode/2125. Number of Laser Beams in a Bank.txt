class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> countLaserBeans;

        for(int i = 0; i < bank.size(); i++) {
            int countOne = 0;

            for(int j = 0; j < bank[i].size(); j++) {
                if(bank[i][j] == '1') countOne++;
            }

            if(countOne > 0) countLaserBeans.push_back(countOne);
        }

        int ans = 0;
        for(int i = 0; i + 1 < countLaserBeans.size(); i++) {
            ans += (countLaserBeans[i] * countLaserBeans[i + 1]);
        }

        return ans;
    }
};