class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            if (st.find(nums[i]) == st.end()) {
                pq.push(nums[i]);
                st.insert(nums[i]);
            }
        }

        int count = 0;
        while(!pq.empty() && pq.size() > k) {
            count++;
            pq.pop();
        }

        return count;
    }
};