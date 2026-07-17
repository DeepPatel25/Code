class Solution {
  public:
    int maxDiffSubArrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> leftMax(n), leftMin(n), rightMax(n), rightMin(n);
        
        int currMax = arr[0], currMin = arr[0];
        leftMax[0] = arr[0], leftMin[0] = arr[0];

        for (int i = 1; i < n; i++) {
            currMax = max(arr[i], currMax + arr[i]);
            leftMax[i] = max(leftMax[i - 1], currMax);
                        
            currMin = min(arr[i], currMin + arr[i]);
            leftMin[i] = min(leftMin[i - 1], currMin);
        }
        
        currMax = arr[n - 1], currMin = arr[n - 1];
        rightMax[n - 1] = arr[n - 1], rightMin[n - 1] = arr[n - 1];
        
        for (int i = n - 2; i >= 0; i--) {
            currMax = max(arr[i], currMax + arr[i]);
            rightMax[i] = max(rightMax[i + 1], currMax);
            
            currMin = min(arr[i], currMin + arr[i]);
            rightMin[i] = min(rightMin[i + 1], currMin);
        }
        
        int ans = INT_MIN;
        for (int i = 0; i < n - 1; i++)
            ans = max({ans, leftMax[i] - rightMin[i + 1], rightMax[i + 1] - leftMin[i]});
            
        return ans;
    }
};
