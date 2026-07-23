class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long i = 1;
        
        while(n != 0) {
            int modulo = n % 10;

            if (modulo != 0) {
                ans.push_back(i * modulo);
            }

            n /= 10;
            i *= 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};