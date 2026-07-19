class Solution {
private:
    bool isEquilateral(vector<int>& nums)     {
        return nums[0] == nums[1] && nums[1] == nums[2] && nums[0] == nums[2];
    }

    bool isIsosceles(vector<int>& nums) {
        return (nums[0] == nums[1] && nums[0] != nums[2]) || 
            (nums[1] == nums[2] && nums[1] != nums[0]) || 
            (nums[2] == nums[0] && nums[2] != nums[1]);
    }

    bool isScalene(vector<int>& nums) {
        return (nums[0] + nums[1] > nums[2]) && 
            (nums[1] + nums[2] > nums[0]) && (nums[2] + nums[0] > nums[1]);
    }

public:
    string triangleType(vector<int>& nums) {
        if(isEquilateral(nums)) {
            return "equilateral";
        } else if(isIsosceles(nums)) {
            return "isosceles";
        } else if(isScalene(nums)) {
            return "scalene";
        } else {
            return "none";
        }
    }
};