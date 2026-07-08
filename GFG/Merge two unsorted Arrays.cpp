class Solution {
  public:
    vector<int> sortedMerge(vector<int>& v1, vector<int>& v2) {
        v1.insert(v1.end(), v2.begin(), v2.end());
        sort(v1.begin(), v1.end());
        
        return v1;
    }
};

