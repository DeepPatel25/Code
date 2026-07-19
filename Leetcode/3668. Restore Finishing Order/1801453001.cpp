class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int, int> mp;
        for (int val: friends)
            mp[val]++;
        
        vector<int> ans;
        for (int i = 0; i < order.size(); i++)
            if (mp[order[i]] > 0)
                ans.push_back(order[i]);

        return ans;
    }
};