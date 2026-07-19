class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size(), m = mana.size();
        vector<long long> prev(n, 0);

        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    prev[i] = prev[i] + skill[i] * 1ll * mana[j];
                } else {
                    prev[i] = max(prev[i], prev[i - 1]) + skill[i] * 1ll * mana[j];
                }
            }

            for (int i = n - 2; i >= 0; i--)
                prev[i] = (prev[i + 1] - skill[i + 1] * 1ll * mana[j]);
        }

        return prev[n - 1];
    }
};

// 0 = 5 -> 30 -> 40 -> 60
// 52 = 53 -> 58 -> 60 -> 64
// 54 = 58 -> 78 -> 86 -> 102
// 86 = 88 -> 98 -> 102 -> 110