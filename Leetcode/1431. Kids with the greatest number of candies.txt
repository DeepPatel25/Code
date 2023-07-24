class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        vector<bool> ans(size, false);
        int maxi = *max_element(candies.begin(), candies.end());

        for(int i = 0; i < size; i++) {
            if(candies[i] + extraCandies >= maxi) ans[i] = true;
        }

        return ans;
    }
};