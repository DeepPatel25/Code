class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<pair<int, int>> pairs;
        
        for(int i = 0; i < people.size(); i++) {
            pairs.push_back({people[i], i});
        }
        sort(pairs.begin(), pairs.end());
        sort(flowers.begin(), flowers.end());

        int l = 0;
        vector<int> ans(people.size());
        multiset<int> S;

        for(int i = 0; i < pairs.size(); i++) {
            while(l < flowers.size() && pairs[i].first >= flowers[l][0])
                S.insert(flowers[l][1]), l++;
            while(S.size() && (*(S.begin()) < pairs[i].first))
                S.erase(S.begin());
            ans[pairs[i].second] = S.size();
        }

        return ans;
    }
};