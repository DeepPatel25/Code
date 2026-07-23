class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int> pq;

        for (int i : nums)
            pq.push(i);
        
        for (int i = nums.size() - 2; i >= 0; i -= 2) {
            nums[i] = pq.top(); pq.pop();
            nums[i + 1] = pq.top(); pq.pop();
        }

        return nums;
    }
};