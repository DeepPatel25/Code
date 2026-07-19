class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long> ,greater<long long>> pq;
        unordered_set<long long> s;

        s.insert(1);
        pq.push(1);

        while(--n) {
            long long top = pq.top();
            pq.pop();

            if(s.find(top * 2) == s.end()) {
                s.insert(top * 2);
                pq.push(top * 2);
            }

            if(s.find(top * 3) == s.end()) {
                s.insert(top * 3);
                pq.push(top * 3);
            }

            if(s.find(top * 5) == s.end()) {
                s.insert(top * 5);
                pq.push(top * 5);
            }
        }

        return pq.top();
    }
};