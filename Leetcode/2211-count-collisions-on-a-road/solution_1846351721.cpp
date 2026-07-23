class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size(), l = 0, r = n - 1;
        while(l < n && directions[l] == 'L') ++l;
        while(r >= 0 && directions[r] == 'R') --r;
        int ans = 0;

        for (int i = l; i <= r; ++i)
            ans += directions[i] != 'S';

        return ans;
    }
};