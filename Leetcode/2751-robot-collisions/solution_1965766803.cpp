class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& health, string directions) {
        int n = positions.size();
        
        map<int, int> mp;
        for (int i = 0; i < n; i++) mp[positions[i]] = i;

        stack<pair<int, char>> st;
        for (auto m: mp) {
            int i = m.second;

            if (directions[i] == 'R') {
                st.push({i, 'R'});
            } else {
                if (!st.empty() && st.top().second == 'R') {
                    // Top Element
                    auto j = st.top();

                    // Same Health or not
                    if (health[i] == health[j.first]) {
                        st.pop();
                    } else if (health[i] < health[j.first]) {
                        health[j.first]--;
                    } else {
                        health[i]--;
                        st.pop();
                        st.push({i, 'L'});
                    }
                } else {
                    st.push({i, 'L'});
                }
            }
        }

        vector<int> res(st.size(), 0);
        int i = 0;

        while (!st.empty()) {
            res[i++] = health[st.top().first];
            st.pop();
        }

        return res;
    }
};