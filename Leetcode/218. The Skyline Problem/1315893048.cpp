class Solution {
public:
    static bool sorting(pair<int, int> a, pair<int, int> b) {
        if(a.first == b.first)
            return a.second < b.second;

        return a.first < b.first;
    }

    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> res;
        vector<pair<int, int>> store;

        for(auto building: buildings) {
            int start = building[0];
            int end = building[1];
            int height = building[2];

            store.push_back({start, -height});
            store.push_back({end, height});
        }

        sort(store.begin(), store.end(), sorting);

        int currHeight = 0;
        multiset<int> st;

        st.insert(0);
        
        for(auto x: store){
            if(x.second < 0) {
                st.insert(-1 * x.second);

                if(currHeight != *st.rbegin()) {
                    currHeight = *st.rbegin();
                    res.push_back({x.first, currHeight});
                }
            } else if(x.second >= 0) {
                auto it = st.find(x.second);
                st.erase(it);

                if(*st.rbegin() != currHeight) {
                    currHeight = *st.rbegin();
                    res.push_back({x.first, currHeight});
                }
            }
        }

        return res;
    }
};