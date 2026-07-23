class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int i = 0, maxi = 0;
        unordered_map<int, int> mp;

        for (int j = 0; j < fruits.size(); j++) {
            mp[fruits[j]]++;

            while (mp.size() > 2) {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0)
                    mp.erase(fruits[i]);
                i++;
            }

            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};