class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long ans = 0;
        priority_queue<int> pq;
        
        for(int val: batteries)
            pq.push(val);

        while(pq.size() >= n) {
            int temp = n;
            vector<int> arr;

            while(temp--) {
                int val = pq.top();
                pq.pop();

                if (val != 1) arr.push_back(val - 1);
            }

            if (arr.size() > 0) {
                for (int a: arr)
                    pq.push(a);
            }
            ans++;
        }

        return ans;
    }
};