class Solution {
private:
    unordered_map<string, vector<int>> mp;

public:
    vector<int> diffWaysToCompute(string str) {
        vector<int> res;

        if(mp.find(str) != mp.end()) return mp[str];

        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '+' || str[i] == '-' || str[i] == '*') {
                vector<int> left = diffWaysToCompute(str.substr(0, i));
                vector<int> right = diffWaysToCompute(str.substr(i + 1));

                for(auto x: left) {
                    for(auto y: right) {
                        if(str[i] == '+') res.push_back(x + y);
                        if(str[i] == '-') res.push_back(x - y);
                        if(str[i] == '*') res.push_back(x * y);
                    }
                }
            }
        }

        if(!res.size()) res.push_back(stoi(str));
        return mp[str] = res;
    }
};