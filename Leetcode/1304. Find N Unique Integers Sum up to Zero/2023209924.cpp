class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        
        if (n % 2 == 1) {
            n--;
            res.push_back(0);
        }

        int i = 1;
        while (n) {
            res.push_back(i);
            res.push_back(-1 * i);
            i++; n -= 2;
        }

        return res;
    }
};