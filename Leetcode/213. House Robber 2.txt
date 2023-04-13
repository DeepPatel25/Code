class Solution {
public:
    int solve(vector<int>& nums){
        int n= nums.size();
        int prev = nums[0];
        int prev2 = 0;
        
        for(int i=1; i<n; i++){
            int take = nums[i]; 
            if(i>1) { take += prev2; }
            int notTake = prev;
            
            int curr = max(take, notTake);
            prev2 = prev;
            prev = curr;
        }
        
        return prev;
    }

    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> first, second;

        for(int i = 0; i < nums.size(); i++){
            if(i != 0) first.push_back(nums[i]);
            if(i != nums.size()-1) second.push_back(nums[i]);
        }

        return max(solve(first), solve(second));
    }
};