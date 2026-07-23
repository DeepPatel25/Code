class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> mp;

        for (vector<int> edge: edges) {
            mp[edge[0]]++;

            if (mp[edge[0]] >= 2)
                return edge[0];
            
            mp[edge[1]]++;

            if (mp[edge[1]] >= 2)
                return edge[1];
        }

        return -1;
    }
};