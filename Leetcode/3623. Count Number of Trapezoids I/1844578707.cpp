class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        const int mod = 1e9 + 7, n = points.size();
        vector<int> freq(n + 1, 0);

        for (auto& p: points)
            freq[p[1]]++;
        
        long long sum = 0, c2 = 0;
        for (int f: freq) {
            if (f <= 1) continue;
            const long long c = f * (f - 1LL) / 2LL;
            sum += c;
            c2 += c * c;
        }

        long long ans = sum * sum - c2;
        ans /= 2;
        ans %= mod;

        return ans;
    }
};