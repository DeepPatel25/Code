class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        std::vector<std::string> times;

        for (int h = 0; h < 12; ++h) {
            for (int m = 0; m < 60; ++m) {
                int h0nes = std::bitset<4>(h).count();
                int m0nes = std::bitset<6>(m).count();

                if (h0nes + m0nes == turnedOn) {
                    times.push_back(std::to_string(h) + ":" + (m < 10 ? "0" : "") + std::to_string(m));
                }
            }
        }

        return times;
    }
};