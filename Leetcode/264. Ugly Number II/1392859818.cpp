class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p1 = 0, p2 = 0, p3 = 0;

        for(int i = 1; i < n; i++) {
            int twoMultiple = 2 * dp[p1];
            int threeMultiple = 3 * dp[p2];
            int fiveMultiple = 5 * dp[p3];

            dp[i] = min(twoMultiple, min(threeMultiple, fiveMultiple));

            if(dp[i] == twoMultiple) p1++;
            if(dp[i] == threeMultiple) p2++;
            if(dp[i] == fiveMultiple) p3++;
        }

        return dp[n - 1];

        // priority_queue<long long, vector<long long> ,greater<long long>> pq;
        // unordered_set<long long> s;

        // s.insert(1);
        // pq.push(1);

        // while(--n) {
        //     long long top = pq.top();
        //     pq.pop();

        //     if(s.find(top * 2) == s.end()) {
        //         s.insert(top * 2);
        //         pq.push(top * 2);
        //     }

        //     if(s.find(top * 3) == s.end()) {
        //         s.insert(top * 3);
        //         pq.push(top * 3);
        //     }

        //     if(s.find(top * 5) == s.end()) {
        //         s.insert(top * 5);
        //         pq.push(top * 5);
        //     }
        // }

        // return pq.top();
    }
};