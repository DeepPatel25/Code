class Solution {
struct Compare {
        bool operator()(const std::pair<int, std::pair<int, int>>& a,
                        const std::pair<int, std::pair<int, int>>& b) {
            // Custom comparator for max-heap
            return a.first < b.first;
        }
    };

public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        std::priority_queue<
                std::pair<int, std::pair<int, int>>,
                std::vector<std::pair<int, std::pair<int, int>>>,
                Compare
            > maxPQ;

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                int sum = nums1[i] + nums2[j];
                if(maxPQ.size() < k) {
                    maxPQ.push({sum, {nums1[i], nums2[j]}});
                } else if(sum < maxPQ.top().first) {
                    maxPQ.pop();
                    maxPQ.push({sum, {nums1[i], nums2[j]}});
                } else {
                    break;  // Since arrays are sorted, no need to continue inner loop
                }
            }
        }

        vector<vector<int>> ans;
        while(!maxPQ.empty()) {
            auto it = maxPQ.top();
            maxPQ.pop();
            ans.push_back({it.second.first, it.second.second});
        }

        return ans;
    }
};