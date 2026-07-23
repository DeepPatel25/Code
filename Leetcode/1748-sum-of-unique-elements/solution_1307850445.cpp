class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0;

        for(int val: nums) {
            mp[val]++;

            if(mp[val] == 1) {
                sum += val;
            } else if(mp[val] == 2) {
                sum -= val;
            } else if(mp[val] > 2) {
                continue;
            }
        }

        return sum;
    }
};