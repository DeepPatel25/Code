class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int black = 0, white = 0;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'B')
                black++;
            else
                white++;
        }

        if (white == 0 and black == k)
            return 0;

        int ans = white;
        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i] == 'B')
                black++;
            else
                white++;
            
            if (blocks[i - k] == 'B')
                black--;
            else
                white--;
            
            ans = min(ans, white);
        }

        return ans;
    }
};