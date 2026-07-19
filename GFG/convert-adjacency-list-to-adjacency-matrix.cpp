class Solution {
  public:
    vector<vector<int>> adjToMat(vector<vector<int>>& adj) {
        int n = adj.size();
        int m = adj[0].size();
        vector<vector<int>>mat(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                int neighbour = adj[i][j];
                mat[i][neighbour] = 1;
            }
        }
        return mat;
    }
};
