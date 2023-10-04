class RandomizedSet {
public:
    unordered_map<int, int> myMap;
    vector<int> list;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(myMap.count(val) != 0) return false;

        myMap[val] = list.size();
        list.push_back(val);

        return true;
    }
    
    bool remove(int val) {
        if(myMap.count(val) != 0) {
            int index = myMap[val];
            int lastValue = list.back();
            list[index] = lastValue;
            list.pop_back();

            myMap[lastValue] = index;
            myMap.erase(val);

            return true; 
        }

        return false;
    }
    
    int getRandom() {
        int randomIndex = rand() % list.size();
        return list[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */