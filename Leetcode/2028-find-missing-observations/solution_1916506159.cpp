class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int totalSum = mean * (m + n);

        for (int x : rolls)
            totalSum -= x;   // sum needed for missing rolls

        // Feasibility check
        if (totalSum < n || totalSum > 6 * n)
            return {};

        vector<int> res(n);
        int base = totalSum / n;
        int extra = totalSum % n;

        // Fill base value
        for (int i = 0; i < n; i++)
            res[i] = base;

        // Distribute remaining sum
        for (int i = 0; i < extra; i++)
            res[i]++;

        return res;
    }
};
