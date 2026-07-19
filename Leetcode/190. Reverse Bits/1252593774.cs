public class Solution {
    public uint reverseBits(uint x) {
        uint y = 0;
        for (int i = 0; i < 32; ++i) {
            y <<= 1;
            y |= (x & 1);
            x >>= 1;
        }
        return y;
    }
}