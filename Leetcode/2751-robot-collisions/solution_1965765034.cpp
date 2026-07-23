class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& health, string directions) {
        int n = positions.size();
        
        map<int, int> mp;
        for (int i = 0; i < n; i++) mp[positions[i]] = i;

        stack<int> st;
        for (auto m: mp) {
            int i = m.second;

            if (directions[i] == 'R') {
                st.push(i);
            } else {
                if (!st.empty()) {
                    // Top Element
                    int j = st.top();

                    // Same Health or not
                    if (health[i] == health[j]) {
                        st.pop();
                    } else if (health[i] < health[j]) {
                        health[j]--;
                    } else {
                        health[i]--;
                        st.pop();
                        st.push(i);
                    }
                }
            }
        }

        vector<int> res(st.size(), 0);
        int i = 0;

        while (!st.empty()) {
            res[i++] = health[st.top()];
            st.pop();
        }

        return res;
    }
};