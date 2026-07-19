class Solution {
private:
    bool isPrime(int n) {
        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                return false;
            }
        }

        return true;
    }

public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int i = 0, j = 0;
        int n = nums.size();

        int maxi = INT_MIN;
        while(i < n && j < n) {
            if(isPrime(nums[i][j])) {
                maxi = max(maxi, nums[i][j]);
            }
            i++; j++;
        }

        i = 0;
        j = n - 1;
        while(i < n && j >= 0) {
            if(isPrime(nums[i][j])) {
                maxi = max(maxi, nums[i][j]);
            }
            i++; j--;
        }

        return maxi;
    }
};