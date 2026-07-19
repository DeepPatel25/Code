class Solution {
public:
    vector<int> originalArr, shuffleArr;

    Solution(vector<int>& nums) {
        originalArr = nums;
        shuffleArr = nums;    
    }
    
    vector<int> reset() {
        return originalArr;
    }
    
    vector<int> shuffle() {
        next_permutation(shuffleArr.begin(), shuffleArr.end());
        return shuffleArr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */