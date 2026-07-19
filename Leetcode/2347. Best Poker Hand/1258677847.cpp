class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_set<char> st(suits.begin(), suits.end());

        if (st.size() == 1) return "Flush";

        unordered_map<int, int> mp;

        int maxi = 0;
        for (int val : ranks) {
            maxi = max(maxi, ++mp[val]);
        }

        if (maxi >= 3) return "Three of a Kind";
        if (maxi == 2) return "Pair";

        return "High Card";
    }
};
