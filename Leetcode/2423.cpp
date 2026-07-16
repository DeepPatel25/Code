class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> mp, mp1;

        for (char& c: word)
            mp[c]++;
        
        for (auto it: mp)
            mp1[it.second]++;
        
        if (mp1.size() > 2)
            return false;
        
        if (mp1.size() == 1) {
            auto it = mp1.begin();
            int freq = it->first, count = it->second;
            
            return (freq == 1 || count == 1);
        }

        auto it1 = mp1.begin(), it2 = next(it1);
        int f1 = it1->first, c1 = it1->second;
        int f2 = it2->first, c2 = it2->second;

        if (f1 > f2) {
            swap(f1, f2);
            swap(c1, c2);
        }

        if (f1 == 1 and c1 == 1)
            return true;
        
        if (f2 - f1 == 1 and c2 == 1)
            return true;
        
        return false;
    }
};
