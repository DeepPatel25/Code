class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        
        vector<int> ids;
        for (int i = 0; i < n; i++) ids.push_back(i);

        sort(ids.begin(), ids.end(), [&](int id1, int id2) {
            return positions[id1] <= positions[id2];
        });

        stack<int> st;
        for (auto id: ids) {
            if (directions[id] == 'R') st.push(id);
            else {
                while (!st.empty() and healths[id] > 0) {
                    if (healths[id] > healths[st.top()]) {
                        healths[id]--;
                        healths[st.top()] = 0;
                        st.pop();
                    } else if (healths[id] < healths[st.top()]) {
                        healths[id] = 0;
                        healths[st.top()]--;
                    } else {
                        healths[st.top()] = 0;
                        healths[id] = 0;
                        st.pop();
                    }
                }
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) if (healths[i] > 0) ans.push_back(healths[i]);
        
        return ans;
    }
};