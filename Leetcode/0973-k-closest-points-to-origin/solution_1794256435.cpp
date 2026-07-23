class Solution {
public:
    struct Compare {
        bool operator()(pair<int, vector<int>> a, pair<int, vector<int>> b) {
            return a.first < b.first;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue< pair<int, vector<int>>, vector<pair<int, vector<int>>>, Compare> pq;

        int n = points.size();
        vector<vector<int>> ans;

        // iterate over k values and add entry in priority queue
        for (int i = 0; i < k; i++) {
            int distance = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({ distance, points[i] });
        }

        // iterate over other elements which are pending
        for (int i = k; i < n; i++) {
            long long distance = points[i][0] * points[i][0] + points[i][1] * points[i][1];

            // check distance value is lower than in priority queue'a top value or not
            if (distance < pq.top().first) {
                pq.pop();
                pq.push({ distance, points[i] });
            }
        }

        // empty priority queue and add points which are closer to k in return vector
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};