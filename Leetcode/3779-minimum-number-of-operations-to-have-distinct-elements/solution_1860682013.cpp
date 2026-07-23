class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;

        while(!nums.empty()) {
            unordered_set<int> s(nums.begin(), nums.end());

            if (s.size() == nums.size())
                break;

            if (nums.size() >= 3) 
                nums.erase(nums.begin(), nums.begin() + 3);
            else
                nums.clear();

            count++;
        }

        return count;
    }
};