class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            string s= bitset<32>(a).to_string();
            string t = bitset<32>(b).to_string();
            
        s = s.substr(s.find('1'));
        t = t.substr(t.find('1'));
            
        reverse(s.begin(), s.end());
            reverse(t.begin(), t.end());

        long long value = stoll(s, nullptr, 2);
            long long value2 = stoll(t, nullptr, 2);
            
            return value < value2;
        });

        return nums;
    }
};