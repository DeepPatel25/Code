class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                long long target_2 = (long long)target - (long long)nums[i] - (long long)nums[j];

                int left = j + 1;
                int right = n - 1;

                while(left < right){
                    int two_sum = nums[left] + nums[right];

                    if(two_sum < target_2) left++;
                    else if (two_sum > target_2) right--;
                    else {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
                        int tempIdx1 = left, tempIdx2 = right;
                        while(left < right && nums[left] == nums[tempIdx1]) left++;
                        while(left < right && nums[right] == nums[tempIdx2]) right--;
                    } 
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }

        return res;
    }
};