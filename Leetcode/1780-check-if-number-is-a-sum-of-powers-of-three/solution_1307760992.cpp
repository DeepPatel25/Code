class Solution {
public:
    vector<int> store;

    bool solve(int i, int n) {
        if(i > 16) return false;
        if(n == 0) return true;

        int temp = store[i];
        if(temp <= n) {
            return solve(i + 1, n - temp) || solve(i + 1, n);
        }

        return false;
    }

    bool checkPowersOfThree(int n) {
        for(int i = 0; i <= 16; i++) {
            store.push_back(pow(3, i));
        }

        return solve(0, n);
    }
};