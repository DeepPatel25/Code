class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int, int> mp;

        while (n) {
            mp[n % 10]++;
            n /= 10;
        }

        int mini = INT_MAX;
        int ans = 0;
        for (auto it: mp) {
            if (it.second < mini) {
                mini = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};