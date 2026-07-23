#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int temp = n;
        int sum = 0, prod = 1;

        while (temp > 0) {
            int rem = temp % 10;
            sum += rem;
            prod *= rem;
            temp /= 10;
        }

        int divisor = sum + prod;
        // Prevent division by zero (happens if n = 0 or digits all 0)
        if (divisor == 0) return false;

        return (n % divisor) == 0;
    }
};
