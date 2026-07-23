class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // Assuming max element constraint is 100,000
        int freq[100001] = {0};
        int min_val = INT_MAX, max_val = INT_MIN;
        
        for (int num : nums) {
            freq[num]++;
            min_val = min(min_val, num);
            max_val = max(max_val, num);
        }
        
        int max_pair_sum = 0;
        int low = min_val;
        int high = max_val;
        
        while (low <= high) {
            // Find next available smallest number
            if (freq[low] == 0) {
                low++;
                continue;
            }
            // Find next available largest number
            if (freq[high] == 0) {
                high--;
                continue;
            }
            
            max_pair_sum = max(max_pair_sum, low + high);
            freq[low]--;
            freq[high]--;
        }
        
        return max_pair_sum;
    }
};