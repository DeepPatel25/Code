class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int num = 0;

        for (int i: nums) {
            if (i % 2 == 0)
                num |= i;
        }

        return num;
    }
};