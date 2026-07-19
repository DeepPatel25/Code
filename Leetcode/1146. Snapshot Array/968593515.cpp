class SnapshotArray {
public:
    vector<map<int, int>> vi;
    int id;

    SnapshotArray(int length) {
        vi.resize(length);
        for(auto &it: vi)
            it[0] = 0;
        id = 0;
    }
    
    void set(int index, int val) {
        vi[index][id] = val;
    }
    
    int snap() {
        return id++;
    }
    
    int get(int index, int snap_id) {
        auto &history = vi[index];
        auto it = history.upper_bound(snap_id);
        return (--it)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */