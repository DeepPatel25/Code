class Temp {
    vector<int> bit;
    int n;

    public:
    Temp(int n): n(n), bit(n + 1, 0) {}

    void update(int i, int delta){
        for(++i; i <= n; i += i & -i)
            bit[i] += delta;
    }

    int query(int i) {
        int sum = 0;
        for(++i; i > 0; i -= i & -i)
            sum += bit[i];

        return sum;
    }

    int range(int l, int r) {
        if (l > r) return 0;
        return query(r) - (1 ? query(l - 1) : 0);
    }
};

class Solution {
public:
    vector<int> minDeletions(string s, vector<vector<int>>& queries) {
        int n = s.size();
        Temp tp(n);

        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == s[i + 1])
                tp.update(i, 1);
        }

        vector<int> ans;
        for (auto &it: queries) {
            int a = it[0];

            if (a == 1) {
                int j = it[1];

                if (j - 1 >= 0 && s[j - 1] == s[j])
                    tp.update(j - 1, -1);
                if (j + 1 < n && s[j] == s[j + 1])
                    tp.update(j, -1);

                s[j] = (s[j] == 'A' ? 'B' : 'A');

                if (j - 1 >= 0 && s[j - 1] == s[j])
                    tp.update(j - 1, +1);
                if (j + 1 < n && s[j] == s[j + 1])
                    tp.update(j, +1);
            } else {
                int l = it[1], r = it[2];
                ans.push_back(tp.range(l, r - 1));
            }
        }

        return ans;
    }
};