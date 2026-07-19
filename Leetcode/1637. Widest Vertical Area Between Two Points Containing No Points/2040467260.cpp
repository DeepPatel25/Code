class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> vi;

        for (auto it: points)
            vi.push_back(it[0]);
        
        sort(vi.begin(), vi.end());
        int maxi = 0;

        for (int i = 1; i < vi.size(); i++)
            maxi = max(maxi, vi[i] - vi[i - 1]);
        
        return maxi;
    }
};