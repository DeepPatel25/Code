#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    string hashFrac(int a, int b) {
        int g = gcd(abs(a), abs(b));
        if (g == 0) return "0/0";

        int num = a / g;
        int den = b / g;

        string sign = "";
        if (num * den < 0 && den != 0)
            sign = "-";

        return sign + to_string(abs(num)) + "/" + to_string(abs(den));
    }

public:
    int countTrapezoids(vector<vector<int>>& points) {
        int n = points.size();
        long long count = 0;

        unordered_map<string, int> pl, cl;

        for (int i = 0; i < n; i++) {
            auto& p2 = points[i];

            for (int j = 0; j < i; j++) {
                auto& p1 = points[j];

                string slope = (p1[0] != p2[0])
                    ? hashFrac(p2[1] - p1[1], p2[0] - p1[0])
                    : "infinity";

                string intercept = (p1[0] != p2[0])
                    ? hashFrac(p1[1] * (p2[0] - p1[0]) -
                               (p2[1] - p1[1]) * p1[0],
                               p2[0] - p1[0])
                    : to_string(p1[0]);

                string slope_key = slope;
                string full_line_key = slope + "," + intercept;

                int seen_p = (pl.count(slope_key) ? pl[slope_key] : 0);
                int seen_c = (cl.count(full_line_key) ? cl[full_line_key] : 0);

                count += seen_p - seen_c;

                pl[slope_key] = seen_p + 1;
                cl[full_line_key] = seen_c + 1;
            }
        }

        long long pg = 0;

        unordered_map<string, int> pld, cld;

        for (int i = 0; i < n; i++) {
            auto& p2 = points[i];

            for (int j = 0; j < i; j++) {
                auto& p1 = points[j];

                string slope = (p1[0] != p2[0])
                    ? hashFrac(p2[1] - p1[1], p2[0] - p1[0])
                    : "infinity";

                string intercept = (p1[0] != p2[0])
                    ? hashFrac(p1[1] * (p2[0] - p1[0]) -
                               (p2[1] - p1[1]) * p1[0],
                               p2[0] - p1[0])
                    : to_string(p1[0]);

                int dist = (p1[0] - p2[0]) * (p1[0] - p2[0])
                         + (p1[1] - p2[1]) * (p1[1] - p2[1]);

                string slope_dist_key = slope + "," + to_string(dist);
                string full_line_dist_key = slope + "," + intercept + "," + to_string(dist);

                int seen_pd = (pld.count(slope_dist_key) ? pld[slope_dist_key] : 0);
                int seen_cd = (cld.count(full_line_dist_key) ? cld[full_line_dist_key] : 0);

                pg += seen_pd - seen_cd;

                pld[slope_dist_key] = seen_pd + 1;
                cld[full_line_dist_key] = seen_cd + 1;
            }
        }

        return count - pg / 2;
    }
};
