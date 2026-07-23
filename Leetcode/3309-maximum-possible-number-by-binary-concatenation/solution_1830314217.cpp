class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        int n = nums.size();

        // Convert to binary strings
        vector<string> bin(n);
        for (int i = 0; i < n; i++) {
            bin[i] = bitset<64>(nums[i]).to_string();
            // remove leading zeros
            bin[i].erase(0, bin[i].find_first_not_of('0'));
            if (bin[i].empty()) bin[i] = "0";
        }

        long long maximum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i) continue;

                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;

                    string s = bin[i] + bin[j] + bin[k];
                    long long val = stoll(s, nullptr, 2);
                    maximum = max(maximum, val);
                }
            }
        }

        return maximum;
    }
};