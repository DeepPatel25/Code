class Solution {
private:
    bool isPrime(int n) {
        if(n <= 1) return false;

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

        vector<int> temp;

        while(i < n && j < n) temp.push_back(nums[i++][j++]);

        i = 0, j = n - 1;
        while(i < n && j >= 0) temp.push_back(nums[i++][j--]);

        sort(temp.begin(), temp.end());
        for(int k = temp.size() - 1; k >= 0; k--) {
            if(isPrime(temp[k])) return temp[k];
        }

        return 0;
    }
};