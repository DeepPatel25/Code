class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0, maxi = 0;
        unordered_set<int> s;
        unordered_map<int, int> mp;

        int n = fruits.size();

        while (j < n) {
            s.insert(fruits[j]);
            mp[fruits[j]]++;

            while (i < n && s.size() > 2) {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) {
                    s.erase(fruits[i]);
                }

                i++;
            }

            maxi = max(maxi, j - i + 1);
            j++;
        }

        return maxi;
    }
};