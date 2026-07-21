constexpr int N = 1e5 + 1;
int B[N] = {0};

class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        const int n = s.size();
        int count = 0, len = 0, j = 0;
        char prev = '@';

        for (char c: s) {
            count += c == '1';
            j += (prev != c and c == '0');
            B[j] += c == '0';
            prev = c;
        }

        int adj2 = 0;
        for (int i = 1; i < j; i++)
            adj2 = max(adj2, B[i] + B[i + 1]);
        
        memset(B, 0, (j + 1) * sizeof(int));
        return count + adj2;
    }
};