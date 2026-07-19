class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;

        for(auto log: logs) {
            if(log[0] == '.' && log[1] == '/') {
                continue;
            } else if(log[0] == '.' && log[1] == '.' && log[2] == '/') {
                if(count == 0) {
                    continue;
                } else {
                    count--;
                }
            } else {
                count++;
            }
        }

        return count;
    }
};