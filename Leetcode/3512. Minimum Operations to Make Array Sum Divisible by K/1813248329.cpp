#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        long long sum = 0;
        for (int a : nums) {
            sum += a;
        }

        return sum % k;
    }
};
