class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            if(arr[i] <= 0) {
                arr[i] = n + 2;
            }
        }

        for(int i = 0; i < n; i++) {
            if(abs(arr[i]) <= n) {
                arr[abs(arr[i]) - 1] = -(abs(arr[abs(arr[i]) - 1]));
            }
        }

        for(int i = 0; i < n; i++) {
            if(arr[i] >= 0) {
                return i + 1;
            }
        }

        return n + 1;
    }
};