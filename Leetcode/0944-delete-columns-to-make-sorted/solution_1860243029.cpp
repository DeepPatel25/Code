class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row = strs.size(), col = strs[0].size();
        int deleteCount = 0;

        for (int i = 0; i < col; i++) {
            for (int j = 1; j < row; j++) {
                if (strs[j][i] < strs[j - 1][i])
                {
                    deleteCount++;
                    break;
                }
            }
        }

        return deleteCount;
    }
};