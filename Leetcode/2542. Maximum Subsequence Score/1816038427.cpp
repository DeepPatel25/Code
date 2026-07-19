class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int, int>> p;
        int n = nums1.size();

        for (int i = 0; i < n; i++)
            p.push_back({nums2[i], nums1[i]});

        sort(p.rbegin(), p.rend());

        long long ans = 0, sum = 0;
        priority_queue<int> pq;

        for (int i = 0; i < k - 1; i++) {
            sum += p[i].second;
            pq.push(-p[i].second);
        }

        for (int i = k - 1; i < n; i++) {
            sum += p[i].second;
            pq.push(-p[i].second);

            ans = max(ans, sum * p[i].first);

            sum += pq.top();
            pq.pop();
        }

        return ans;
    }
};