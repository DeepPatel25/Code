class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        sort(tiles.begin(), tiles.end(), [&](const vector<int> &a, const vector<int> &b) {
            return a[0] < b[0];
        });

        int n = tiles.size();
        vector<int> prefixSum(n), endTiles(n);

        for (int i = 0; i < n; i++) {
            prefixSum[i] = (i > 0 ? prefixSum[i - 1] : 0) + tiles[i][1] - tiles[i][0] + 1;
            endTiles[i] = tiles[i][1];
        }

        int maxWhiteTiles = 0;
        for (int i = 0; i < n; i++) {
            int endingPoint = tiles[i][0] + carpetLen - 1;
            auto it = upper_bound(endTiles.begin(), endTiles.end(), endingPoint);
            int upperIndex = -1;

            if (it == endTiles.end())
                upperIndex = n;
            else
                upperIndex = it - endTiles.begin();
            
                        int whiteTilesCovered = (upperIndex > 0 ? prefixSum[upperIndex-1] : 0) - (i>0 ? prefixSum[i-1] : 0) + (upperIndex<n && endingPoint >= tiles[upperIndex][0] ? (endingPoint - tiles[upperIndex][0] + 1) : 0);


            maxWhiteTiles = max(maxWhiteTiles, whiteTilesCovered); 
        }

        return maxWhiteTiles;
    }
};