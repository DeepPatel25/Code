class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count = 0, n = colors.size();
        
        for (int i = 0; i < n; i++) {
            int prev = i == 0 ? n - 1 : i - 1;
            int next = i == n - 1 ? 0 : i + 1;

            if ((colors[i] == 0 and colors[prev] == 1 and colors[next] == 1)
                or (colors[i] == 1 and colors[prev] == 0 and colors[next] == 0)) {
                count++;
            }
        }

        return count;
    }
};