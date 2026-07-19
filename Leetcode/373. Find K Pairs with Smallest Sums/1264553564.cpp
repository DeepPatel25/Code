class Solution {
struct Compare {
    bool operator()(const std::pair<int, std::pair<int, int>>& a,
                    const std::pair<int, std::pair<int, int>>& b) {
        // Compare the first elements
        if (a.first != b.first) {
            return a.first > b.first;
        }
        // If first elements are equal, compare the second elements
        if (a.second.first != b.second.first) {
            return a.second.first > b.second.first;
        }
        // If second elements are also equal, compare the third elements
        return a.second.second > b.second.second;
    }
};

public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        std::priority_queue<
                std::pair<int, std::pair<int, int>>,
                std::vector<std::pair<int, std::pair<int, int>>>,
                Compare
            > minPQ;

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                minPQ.push({nums1[i] + nums2[j], {nums1[i], nums2[j]}});
            }
        }

        vector<vector<int>> ans;
        while(k--) {
            auto it = minPQ.top();
            minPQ.pop();
            ans.push_back({it.second.first, it.second.second});
        }

        return ans;
    }
};