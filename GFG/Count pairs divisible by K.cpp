class Solution {
  public:
    int countKdivPairs(vector<int>& arr, int k) {
        int cnt = 0, size = arr.size();
        vector<int> mp(k, 0);
        
        for (int i = 0; i < size; i++) {
            int temp = (k - (arr[i] % k)) % k;
            
            cnt += mp[temp];
            mp[arr[i] % k]++;
        }
        
        return cnt;
    }
};
