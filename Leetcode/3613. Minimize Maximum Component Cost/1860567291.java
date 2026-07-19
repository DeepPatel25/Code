class Solution {
    int[] par;

    int findPar(int u) {
        if (par[u] == u) {
            return u;
        }

        return par[u] = findPar(par[u]);
    }

    public int minCost(int n, int[][] edges, int k) {
        int comps = n;
        par = new int[n];

        for (int i = 0; i < n; i++)
            par[i] = i;
        
        Arrays.sort(edges, (int[] a, int [] b) -> { return a[2] - b[2]; });

        int maxSoFar = 0;
        if (comps <= k) return maxSoFar;
        
        for (int i = 0; i < edges.length; i++) {
            int u = edges[i][0], v = edges[i][1], w = edges[i][2], 
                p1 = findPar(u), p2 = findPar(v);

            // diff. components
            if (p1 != p2) {
                par[p1] = p2;
                comps--;
                maxSoFar = w;
            }

            if (comps <= k) {
                return maxSoFar;
            }
        }

        return maxSoFar;
    }
}