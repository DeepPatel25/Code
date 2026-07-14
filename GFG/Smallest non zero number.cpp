class Solution {
  private:
    bool isValid(long long x, vector<int>& arr, int end) {
        for (int a: arr) {
            x = 2LL * x - a;
            
            if (x >= end)
                return true;
                
            if (x < 0)
                return false;
        }
        
        return true;
    }
    
  public:
    int find(vector<int>& arr) {
        int start = 1, end = *max_element(arr.begin(), arr.end()), ans = end;
        int maxi = end;
    
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (isValid(mid, arr, maxi)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
};
