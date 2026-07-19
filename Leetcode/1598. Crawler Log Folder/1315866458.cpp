class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;

        for(string &log: logs) {
            if(log == "./") {
                continue;
            } else if(log == "../") {
                if(count > 0) count--;
            } else {
                count++;
            }
        }

        return count;
    }
};