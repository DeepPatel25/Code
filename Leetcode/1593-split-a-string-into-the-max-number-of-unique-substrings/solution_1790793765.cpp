class Solution {
private:
    int best = 0; // to store the maximum unique splits found so far

    void dfs(int i, string &s, unordered_set<string> &st) {
        int n = s.size();

        // --- PRUNING ---
        // If even by taking each remaining character as a unique substring
        // we cannot beat the current best answer, stop searching this branch.
        if (st.size() + (n - i) <= best) return;

        // --- BASE CASE ---
        // If we reach the end of the string, update best with unique count.
        if (i == n) {
            best = max(best, (int)st.size());
            return;
        }

        // --- RECURSION ---
        // Try every possible substring starting at index i
        string temp;
        for (int j = i; j < n; j++) {
            temp.push_back(s[j]); // build substring incrementally

            // If this substring has not been used yet
            if (st.find(temp) == st.end()) {
                st.insert(temp);          // choose it
                dfs(j + 1, s, st);        // explore further
                st.erase(temp);           // backtrack
            }
        }
    }

public:
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        dfs(0, s, st);
        return best;
    }
};
