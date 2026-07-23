class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::deque<int> dq;  // Will store indices of the elements
        std::vector<int> ans;

        for (int i = 0; i < nums.size(); ++i) {
            // Remove indices that are out of the bounds of the current window
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }

            // Remove elements that are less than the current element from the deque
            // as they are not useful anymore
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // Add current element index to the deque
            dq.push_back(i);

            // The first element of the deque is the largest element of the current window
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};
