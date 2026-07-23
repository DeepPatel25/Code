class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double, int>> workers;
        priority_queue<int> pq;
        
        double qsum = 0, res = DBL_MAX;

        for(int i = 0; i < wage.size(); i++)
            workers.push_back({(double)wage[i] / quality[i], quality[i]});

        sort(workers.begin(), workers.end());

        for(auto worker : workers) {
            qsum += worker.second;
            pq.push(worker.second);

            if(pq.size() > k) qsum -= pq.top(), pq.pop();
            if(pq.size() == k) res = min(res, worker.first * qsum);
        }

        return res;
    }
};