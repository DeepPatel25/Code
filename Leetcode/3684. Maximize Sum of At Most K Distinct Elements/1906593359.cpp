class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> st;
        priority_queue<int> pq;

        for (int i : nums) {
            if (st.find(i) == st.end()) {
                st.insert(i);
                pq.push(i);
            }
        }

        vector<int> ans;
        while(k-- && pq.size()) {
            ans.push_back(pq.top());
            pq.pop();
        }

        return ans;
    }
};