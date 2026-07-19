#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();
        int i = 0, j = n - 1; // two pointers for front and back selection
        long long total = 0;

        // Two min-heaps for front and back candidate pools
        priority_queue<int, vector<int>, greater<int>> leftHeap, rightHeap;

        // Select exactly k workers
        while (k--) {
            // Fill left heap with next available candidates from the front
            while (leftHeap.size() < candidates && i <= j)
                leftHeap.push(costs[i++]);

            // Fill right heap with next available candidates from the back
            while (rightHeap.size() < candidates && i <= j)
                rightHeap.push(costs[j--]);

            // Get smallest available cost from both heaps
            int leftMin = leftHeap.empty() ? INT_MAX : leftHeap.top();
            int rightMin = rightHeap.empty() ? INT_MAX : rightHeap.top();

            // Pick the cheaper one and remove it from respective heap
            if (leftMin <= rightMin) {
                total += leftMin;
                leftHeap.pop();
            } else {
                total += rightMin;
                rightHeap.pop();
            }
        }

        return total;
    }
};
