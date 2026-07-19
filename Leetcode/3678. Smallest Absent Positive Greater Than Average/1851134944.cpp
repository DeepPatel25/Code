class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int> s;
        int sum = 0;
        for (int i: nums) {
            sum += i;
            s.insert(i);
        }

        int a = sum / nums.size();
        a++;
        while(s.find(a) != s.end()) {
            a++;
        }

        return a;
    }
};