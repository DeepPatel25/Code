class Solution {
public:
    int numberOfSubstrings(string s) {
        int N = s.size();

        // next_zero[i] = index of next '0' after i (or N if none)
        vector<int> next_zero(N, N);
        for (int i = N - 2; i >= 0; --i) {
            if (s[i + 1] == '0')
                next_zero[i] = i + 1;
            else
                next_zero[i] = next_zero[i + 1];
        }

        long long res = 0;

        for (int l = 0; l < N; ++l) {
            int zeroes = (s[l] == '0' ? 1 : 0);
            int r = l;

            while (1LL * zeroes * zeroes <= N) {
                int next_z = next_zero[r];
                int ones = (next_z - l) - zeroes;

                if (ones >= zeroes * zeroes) {
                    res += min(
                        next_z - r,
                        ones - zeroes * zeroes + 1
                    );
                }

                r = next_z;
                zeroes++;

                if (r == N) break;
            }
        }

        return res;
    }
};