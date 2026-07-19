constexpr int bias = 1 << 11;

class Solution {
public:
    using ll = long long;

    static int pack2(int a, int b) {
        return((ll)(a + bias) << 16) + (b + bias);
    }

    static ll pack3(int a, int b, int c) {
        return ((ll)(a + bias) << 50) | ((ll)(b + bias) << 30) | (c + bias * bias);
    }

    static ll pack4(int a, int b, int c, int d) {
        return ((ll)(a + bias) << 48) | ((ll)(b + bias) << 32) | ((ll)(c + bias) << 16)
            | (d + bias);
    }

    int countTrapezoids(vector<vector<int>>& points) {
        const int n = points.size();
        const int nn = n * (n - 1);

        unordered_map<ll, int> coeff, midpointwslope;
        unordered_map<ll, int> slope, midpoint;

        coeff.reserve(n);
        slope.reserve(n);
        midpointwslope.reserve(n);
        midpoint.reserve(n);

        int cnt = 0;

        for (int i = 0; i < n - 1; i++) {
            const int x0 = points[i][0], y0 = points[i][1];

            for (int j = i + 1; j < n; j++) {
                const int x1 = points[j][0], y1 = points[j][1];

                int a = y1 - y0, b = x0 - x1, c = y0 * x1 - y1 * x0;

                if (a == 0 && b < 0) { b = -b; c = -c; }
                else if (a < 0) { a = -a, b = -b, c = -c; }

                int gm = gcd(a, b), gc = gcd(gm, c);
                int ab = pack2(a / gm, b / gm);
                ll abc = pack3(a / gc, b / gc, c / gc);

                ll midP = pack2(x0 + x1, y0 + y1);
                ll midab = pack4(x0 + x1, y0 + y1, a / gm, b / gm);

                cnt += (slope[ab]++) - (coeff[abc]++) - (midpoint[midP]++)
                    + (midpointwslope[midab]++);
            }
        }

        return cnt;
    }
};