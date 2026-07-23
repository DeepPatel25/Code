class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        std::string result;
        for (int i = 0; i < nums.size(); i++) {
            result += (nums[i][i] == '1') ? '0' : '1';
        }

        return result;
    }
};