class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mp;

        while (n) {
            mp[n % 10]++;
            n /= 10;
        }

        int sum = 0;
        for (auto it: mp)
            sum += (it.first * it.second);
        
        return sum;
    }
};