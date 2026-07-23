class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> seen;
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int x : nums) {
            if (seen.insert(x).second) { // only if distinct
                minHeap.push(x);
                if (minHeap.size() > k)
                    minHeap.pop();
            }
        }

        vector<int> ans;
        while (!minHeap.empty()) {
            ans.push_back(minHeap.top());
            minHeap.pop();
        }

        reverse(ans.begin(), ans.end()); // descending order
        return ans;
    }
};
