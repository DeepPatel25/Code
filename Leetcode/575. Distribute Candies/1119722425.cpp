class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int> s(candyType.begin(), candyType.end());

        if(s.size() >= n / 2){
            return n / 2;
        }
        return s.size();
    }
};