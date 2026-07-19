class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0, maxi = 0;
        unordered_set<int> s;
        int n = fruits.size();

        while (j < n) {
            s.insert(fruits[j]);

            while (i < n && s.size() > 2) {
                s.erase(fruits[i++]);
            }

            maxi = max(maxi, j - i + 1);
            j++;
        }

        return maxi;
    }
};