class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;

        for (int i = 0; i < n; i++)
            if (bin(i) == k)
                sum += nums[i];
        
        return sum;
    }

private:
    int bin(int n) {
        int k = 0;
        while (n) {
            if (n % 2 != 0)
                k++;
            n /= 2;
        }

        return k;
    }
};