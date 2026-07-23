class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        map<int, int> mp;
        set<int> st;
        
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if (st.find(nums[i]) == st.end()) {
                pq.push(nums[i]);
                st.insert(nums[i]);
            }
        }

        int t = pq.top();
        pq.pop();

        int count = mp[t], finalCount = 0;

        while(!pq.empty()) {
            if (count - k >= 0) {
                finalCount = finalCount + mp[pq.top()];
            }

            count += mp[pq.top()];
            pq.pop();
        }

        return finalCount;
    }
};