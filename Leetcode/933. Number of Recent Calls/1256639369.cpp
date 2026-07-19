class RecentCounter {
public:
    map<int, int> mp;

    RecentCounter() {

    }
    
    int ping(int t) {
        mp[t]++;

        int count = 0;
        for(auto it: mp) {
            if(it.first >= t - 3000 && it.first <= t) {
                count++;
            } else {
                mp.erase(it.first);
            }
        }

        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */