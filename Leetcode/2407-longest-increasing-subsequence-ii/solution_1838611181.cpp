class Solution {
private:
    vector<int> seg;
    int size;

    void update(int v, int l, int r, int pos, int newvalue) {
        if (l == r) {
            seg[v] = newvalue;
            return;
        }
        int m = (l + r) / 2;
        if (pos <= m) update(2*v, l, m, pos, newvalue);
        else update(2*v + 1, m+1, r, pos, newvalue);
        seg[v] = max(seg[2*v], seg[2*v+1]);
        return;
    }

    int query(int v, int l, int r, int ql, int qr) {
        if (ql > qr) return 0;
        if (ql == l && r == qr) return seg[v];
        int m = (l + r) / 2;
        int left = query(2*v, l, m, ql, min(qr, m));
        int right = query(2*v + 1, m+1, r, max(ql, m+1), qr);
        return max(left, right);
    }
public:
    int lengthOfLIS(vector<int>& nums, int k) {
        set<int> st;

        for (int i: nums) {
            st.insert(i);
            st.insert(i-k);
            st.insert(i - 1);
        }
        unordered_map<int, int> nti;
        for (int i: st) nti[i] = nti.size();
        size = nti.size();

        seg.resize(4*size + 1, 0);

        int output = 0;
        vector<int> arr;

        for (int i: nums) {
            int q = query(1, 0, size - 1, nti[i - k], nti[i - 1]);
            output = max(output, q + 1);
            update(1, 0, size - 1, nti[i], q + 1);
            arr.push_back(q+1);
        }

        return output;
    }
};