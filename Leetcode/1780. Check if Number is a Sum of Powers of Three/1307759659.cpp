class Solution {
public:
    bool solve(int i, int n) {
        if(i > 16) return false;
        if(n == 0) return true;

        int temp = pow(3, i);
        if(temp <= n) {
            return solve(i + 1, n - temp) || solve(i + 1, n);
        }

        return false;
    }

    bool checkPowersOfThree(int n) {
        return solve(0, n);
    }
};