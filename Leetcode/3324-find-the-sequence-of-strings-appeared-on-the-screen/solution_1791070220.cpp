class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        int size = target.size();
        string temp = "";

        for (int i = 0; i < size; i++) {
            temp += target[i];

            for(char ch = 'a'; ch <= target[i]; ch++) {
                temp[i] = ch;
                ans.push_back(temp);
            }
        }

        return ans;
    }
};