class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(countnum(nums, nums[i])==1){
                sum+=nums[i];
            }
        }
        return sum;
    }
    
    int countnum(vector<int>& nums, int key){
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==key) count++;
        }
        return count;
    }
};