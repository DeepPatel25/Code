class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        long long ans = 0;
        int n = values.size();
        int idx = 0;
        vector<bool> visited(n, false);

        while (idx >= 0 && idx < n) {
            if (visited[idx])
                break;
            
            visited[idx] = true;

            if (instructions[idx] == "add") {
                ans += values[idx++];
            } else {
                idx += values[idx];
            }
        }

        return ans;
    }
};