class Solution {
public:
    void sortBasedOnNums2(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        
        // Create a vector of pairs (value from nums2, corresponding value from nums1)
        vector<pair<int, int>> combined(n);
        for (int i = 0; i < n; ++i) {
            combined[i] = {nums2[i], nums1[i]};
        }
        
        // Sort the pairs based on the first element (the value in nums2)
        sort(combined.begin(), combined.end());

        // Update nums1 and nums2 with the sorted values
        for (int i = 0; i < n; ++i) {
            nums2[i] = combined[i].first;
            nums1[i] = combined[i].second;
        }
    }

    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        sortBasedOnNums2(nums1, nums2);

        long long maxi = 0;
        long long sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums1[i];
        }


        maxi = max(maxi, nums2[0] * sum);

        for(int i = k; i < nums2.size(); i++) {
            sum += nums1[i] - nums1[i - k];
            cout << sum << ' ' << nums2[i - k + 1] << endl;
            maxi = max(maxi, sum * nums2[i - k + 1]);
        }

        return maxi;
    }
};