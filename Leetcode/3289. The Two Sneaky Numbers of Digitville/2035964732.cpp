class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> s;
        int first = -1, second = -1;

        for (int i: nums) {
            if (s.find(i) != s.end()) {
                if (first == -1) {
                    first = i;
                } else {
                    second = i;
                    break;
                }
            }

            s.insert(i);
        }

        return {first, second};
    }
};