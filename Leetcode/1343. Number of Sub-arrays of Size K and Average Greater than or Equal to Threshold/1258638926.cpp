class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, count = 0;
        int target = k * threshold; // Calculate the target sum
        
        // Calculate sum of first k elements
        for (int i = 0; i < k; ++i)
            sum += arr[i];
        
        if (sum >= target) // If the initial sum meets the threshold
            ++count;
        
        // Slide the window to calculate sum of each subarray
        for (int i = k; i < arr.size(); ++i) {
            sum += arr[i] - arr[i - k]; // Update the sum
            
            if (sum >= target) // If the sum meets the threshold
                ++count;
        }
        
        return count;
    }
};
