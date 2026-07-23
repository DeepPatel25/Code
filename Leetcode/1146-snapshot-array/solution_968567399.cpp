class SnapshotArray {
public:
    vector<int> vi;
    map<int, vector<int>> mp;
    int id;

    SnapshotArray(int length) {
        vi.resize(length, 0);
        id = 0;
    }
    
    void set(int index, int val) {
        vi[index] = val;
    }
    
    int snap() {
        mp[id] = vi;
        vi.clear();
        id++;

        return id - 1;
    }
    
    int get(int index, int snap_id) {
        return mp[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */