class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int size = nums.size();
        vector<int> gcdArr;

        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++)
                gcdArr.push_back(gcd(nums[i], nums[j]));
        
        sort(gcdArr.begin(), gcdArr.end());
        vector<int> ans(queries.size());

        for (int i = 0; i < queries.size(); i++)
            ans[i] = gcdArr[queries[i]];
    
        return ans;
    }
};