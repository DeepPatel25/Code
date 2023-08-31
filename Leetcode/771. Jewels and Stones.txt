class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jewelsSet;

        for(int i = 0; i < jewels.size(); i++) {
            jewelsSet.insert(jewels[i]);
        }

        int count = 0;
        for(int i = 0; i < stones.size(); i++) {
            if(jewelsSet.find(stones[i]) != jewelsSet.end()) {
                count++;
            }
        }

        return count;
    }
};