class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        
        for (int a: apple)
            totalApples += a;
        
        sort(capacity.begin(), capacity.end(), greater<int>());

        int ans = 0, currentCap = 0;
        for (int cap: capacity) {
            currentCap += cap;
            ans++;

            if (currentCap >= totalApples)
                break;
        }

        return ans;
    }
};