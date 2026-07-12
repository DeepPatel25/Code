class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans(arr.size(), 0);
        unordered_set<int> s;
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < arr.size(); i++) {
            if (s.find(arr[i]) == s.end()) {
                pq.push(arr[i]);
                s.insert(arr[i]);
            }

            mp[arr[i]].push_back(i);
        }

        int i = 1;
        while (!pq.empty()) {
            int top = pq.top();
            pq.pop();

            for (int idx: mp[top]) {
                ans[idx] = i;
            }

            i++;
        }

        return ans;
    }
};
