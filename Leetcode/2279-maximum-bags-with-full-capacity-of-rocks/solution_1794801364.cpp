class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int i = 0; i < capacity.size(); i++) {
            if (capacity[i] == rocks[i])
                ans++;
            else
                minHeap.push(capacity[i] - rocks[i]);
        }

        while(!minHeap.empty() && minHeap.top() <= additionalRocks) {
            additionalRocks -= minHeap.top();
            minHeap.pop();
            ans++;
        }

        return ans;
    }
};