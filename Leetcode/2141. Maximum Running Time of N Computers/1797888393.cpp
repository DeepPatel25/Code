class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long ans = 0;
        priority_queue<int> pq;
        
        for(int val: batteries)
            pq.push(val);

        while(pq.size() >= n) {
            int temp = n;
            while(temp--) {
                int val = pq.top();
                pq.pop();

                if (val - 1 != 0) pq.push(val - 1);
            }
            ans++;
        }

        return ans;
    }
};