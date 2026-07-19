struct DSU {
    int mx;
    vector<int> par, size;
    
    DSU(int n) {
        mx = 1;
        par.resize(n + 1);
        size.resize(n + 1, 1);

        for (int j = 1; j <= n; j++) par[j] = j;
    }

    int Leader(int x) {
        if (par[x] == x) return x;
        return (par[x] == Leader(par[x]));
    }

    void merge(int x, int y) {
        x = Leader(x);
        y = Leader(y);

        if (x == y) return;
        if (size[x] > size[y]) swap(x, y);

        size[y] += size[x];
        par[x] = y;

        mx = max(mx, size[y]);
    }
};

class Solution {
public:
    int validSubarraySize(vector<int>& nums, int threshold) {
        int n = nums.size();
        vector<pair<double, int>> valAndInd;

        for (int j = 0; j < n; j++)
            valAndInd.push_back({nums[j], j + 1});
        
        sort(valAndInd.begin(), valAndInd.end());

        vector<bool> active(n + 1, false);
        int k = 1;
        DSU dsu(n);

        for (int i = n - 1; i >= 0 && k <= n; ) {
            double kThreshold = (double)threshold / k;

            while (i >= 0 && valAndInd[i].first > kThreshold) {
                int ind = valAndInd[i].second;
                active[ind] = true;

                if (active[ind - 1]) dsu.merge(ind, ind - 1);
                if (active[ind + 1]) dsu.merge(ind, ind + 1);

                i--;
            }

            if (i < n - 1 && dsu.mx >= k) return k;
            k++;
        }

        return -1;
    }
};