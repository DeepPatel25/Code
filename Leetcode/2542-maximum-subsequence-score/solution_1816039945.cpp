#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        int n = nums1.size();
        vector<pair<int, int>> pairs;
        pairs.reserve(n);

        // Step 1: Pair elements of nums2 and nums1 as (nums2[i], nums1[i])
        // We want to sort based on nums2[i] since it represents the "multiplier"
        for (int i = 0; i < n; ++i)
            pairs.emplace_back(nums2[i], nums1[i]);

        // Step 2: Sort pairs in descending order of nums2
        sort(pairs.rbegin(), pairs.rend());

        long long ans = 0, sum = 0;
        priority_queue<int, vector<int>, greater<int>> minHeap; // min-heap to track smallest nums1 values

        // Step 3: Add first (k - 1) elements to heap (for setup)
        for (int i = 0; i < k - 1; ++i) {
            sum += pairs[i].second;
            minHeap.push(pairs[i].second);
        }

        // Step 4: Iterate through remaining elements
        for (int i = k - 1; i < n; ++i) {
            // Add the current nums1 value
            sum += pairs[i].second;
            minHeap.push(pairs[i].second);

            // Calculate potential answer using current nums2 (smallest multiplier so far)
            ans = max(ans, sum * (long long)pairs[i].first);

            // Remove smallest nums1 element to maintain exactly k elements
            sum -= minHeap.top();
            minHeap.pop();
        }

        return ans;
    }
};
