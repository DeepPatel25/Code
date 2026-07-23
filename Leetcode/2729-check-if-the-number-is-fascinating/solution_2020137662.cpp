class Solution {
private:
    bool helper(int n, unordered_map<int, int> &mp) {
        int count = 0;

        while (n) {
            int rem = n % 10;
            count++;
            
            if (rem == 0)
                return false;
            
            mp[rem]++;
            n /= 10;
        }

        return count == 3 && true;
    }

public:
    bool isFascinating(int n) {
        unordered_map<int, int> mp;

        int n2 = 2 * n, n3 = 3 * n;

        if (!helper(n, mp) || !helper(n2, mp) || !helper(n3, mp) || mp.size() != 9)
            return false;
        
        for (auto it: mp) {
            if ((it.first < 1 and it.second > 9) and (it.second != 1))
                return false;
        }

        return true;
    }
};