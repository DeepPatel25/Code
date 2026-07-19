class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> freq1(101, 0);
        vector<int> freq2(101, 0);
        vector<int> freq3(101, 0);

        for (int i = 0; i < nums1.size(); i++) freq1[nums1[i]] = 1;
        for (int i = 0; i < nums2.size(); i++) freq2[nums2[i]] = 1;
        for (int i = 0; i < nums3.size(); i++) freq3[nums3[i]] = 1;

        vector<int> ans;
        for (int i = 0; i < 101; i++) {
            if (freq1[i] + freq2[i] + freq3[i] >=2)
                ans.push_back(i);
        }
        
        return ans;
    }
};