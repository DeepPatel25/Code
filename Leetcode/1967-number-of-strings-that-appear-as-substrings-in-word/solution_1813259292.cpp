#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int count = 0;

        for (const string& p : patterns) {
            // Check if pattern 'p' is a substring of 'word'
            if (word.find(p) != string::npos)
                ++count;
        }

        return count;
    }
};
