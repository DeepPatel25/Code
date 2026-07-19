class Solution {
    private int gcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }

        return a;
    }

    private String hash(int a, int b) {
        int g = gcd(Math.abs(a), Math.abs(b));
        
        if (g == 0) return "0/0";

        int num = a / g, den = b / g;
        return (num * den < 0 && den != 0 ? "-" : "") + Math.abs(num) 
            + "/" + Math.abs(den);
    }

    public int countTrapezoids(int[][] points) {
        int n = points.length;
        int count = 0;

        HashMap<String, Integer> pl = new HashMap<>(), cl = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int[] p2 = points[i];

            for (int j = 0; j < i; j++) {
                int[] p1 = points[j];

                String slope = (p1[0] != p2[0]) ? hash(p2[1] - p1[1],
                    p2[0] - p1[0]) : "infinity";
                
                String intercept = (p1[0] != p2[0])
                    ? hash(p1[1] * (p2[0] - p1[0]) - (p2[1] - p1[1]) * p1[0],
                    p2[0] - p1[0]) : p1[0] + "";

                String slope_key = slope;
                String full_line_key = slope + "," + intercept;

                int seen_p = pl.getOrDefault(slope_key, 0);
                int seen_c = cl.getOrDefault(full_line_key, 0);

                count += seen_p - seen_c;

                pl.put(slope_key, seen_p + 1);
                cl.put(full_line_key, seen_c + 1);
            }
        }

        int pg = 0;

        HashMap<String, Integer> pld = new HashMap<>(), cld = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int[] p2 = points[i];
            
            for (int j = 0; j < i; j++) {
                int[] p1 = points[j];

                String slope = (p1[0] != p2[0]) ?
                            hash(p2[1] - p1[1], p2[0] - p1[0])
                            : "infinity";
                
                String intercept = (p1[0] != p2[0])
                    ? hash(p1[1] * (p2[0] - p1[0]) - 
                    (p2[1] - p1[1]) * p1[0], p2[0] - p1[0]) : p1[0] + "";

                int dist = (p1[0] - p2[0]) * (p1[0] - p2[0])
                    + (p1[1] - p2[1]) * (p1[1] - p2[1]);

                String slope_dist_key = slope + "," + dist;
                String fldk = slope + "," + intercept + "," + dist;

                int seen_pd = pld.getOrDefault(slope_dist_key, 0);
                int seen_cd = cl.getOrDefault(fldk, 0);

                pg += seen_pd - seen_cd;

                pld.put(slope_dist_key, seen_pd + 1);
                cld.put(fldk, seen_cd + 1);
            }
        }

        return count - pg / 2;
    }
}