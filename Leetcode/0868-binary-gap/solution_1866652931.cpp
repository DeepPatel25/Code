class Solution {
public:
    int binaryGap(int n) {
        vector<int> idx;
        int i = 1;

        while(n != 0) {
            if (n % 2 == 1)
                idx.push_back(i);
            i++;
            n /= 2;
        }

        if (idx.size() <= 1)
            return 0;
        
        int maxi = 0;
        for (int i = 0; i < idx.size() - 1; i++) {
            maxi = max(maxi, idx[i + 1] - idx[i]);
        }

        return maxi;
    }
};