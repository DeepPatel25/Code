class NumArray {
private:
    vector<int> prefixSum;

public:
    NumArray(vector<int>& nums) {
        if (nums.size() == 0) return;

        prefixSum.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++)
            prefixSum.push_back(nums[i] + prefixSum[i - 1]);    
    }
    
    void update(int index, int val) {
        if (index >= prefixSum.size()) return;

        int arrayValue = prefixSum[index];
        if (index > 0)
            arrayValue = prefixSum[index] - prefixSum[index - 1];
        
        int diff = -arrayValue + val;
        for (int i = index; i < prefixSum.size(); i++)
            prefixSum[i] += diff;
    }
    
    int sumRange(int left, int right) {
        return left == 0 ? prefixSum[right] : prefixSum[right] - prefixSum[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */