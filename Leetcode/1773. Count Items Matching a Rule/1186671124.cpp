class Solution {
public:
    int countRows(int i, vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        
        for(int j = 0; j < items.size(); j++) {
            if(items[j][i] == ruleValue) {
                count++;
            }
        }

        return count;
    }

    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        if(ruleKey == "type") {
            return countRows(0, items, ruleKey, ruleValue);
        } else if(ruleKey == "color") {
            return countRows(1, items, ruleKey, ruleValue);
        } else {
            return countRows(2, items, ruleKey, ruleValue);
        }
    }
};