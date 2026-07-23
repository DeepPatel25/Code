#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // Disable synchronization for faster I/O (optional in coding contests)
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int prev = 0;   // Number of '1's in the last non-empty row
        int total = 0;  // Final answer

        for (const string& row : bank) {
            // Count the number of security devices ('1') in this row
            int ones = count(row.begin(), row.end(), '1');

            // If this row has devices, multiply with the previous row's count
            if (ones > 0) {
                total += prev * ones;
                prev = ones; // Update previous non-empty row
            }
        }

        return total;
    }
};
