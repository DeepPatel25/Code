class Solution {
  public:
    int countWords(vector<string> &list) {
        unordered_map<string, int> mp;
        
        for (string &s: list)
            mp[s]++;
        
        int cnt = 0;
        for (auto it: mp)
            if (it.second == 2)
                cnt++;
            
        return cnt;
    }
};
