class Solution {
public:
    long long splitArray(vector<int>& arr) {
        int n = arr.size(), l = 0, r = n - 1;
        long long lsum = 0, rsum = 0;

        while(l < n - 1 && arr[l] < arr[l + 1])
            lsum += arr[l++];
        
        while(r > 0 && arr[r - 1] > arr[r])
            rsum += arr[r--];
        
        if (l == r) {
            long long option1 = abs((lsum + arr[l]) - rsum);
            long long option2 = abs(lsum - (rsum + arr[l]));
            return min(option1, option2);
        }
        else if (r - l == 1 && arr[l] == arr[r])
            return abs(lsum - rsum);
        
        return -1;
    }
};