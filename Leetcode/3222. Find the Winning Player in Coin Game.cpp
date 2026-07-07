class Solution {
public:
    string winningPlayer(int x, int y) {
        bool isAlice = true;

        while (x >= 1 and y >= 4) {
            x -= 1;
            y -= 4;
            isAlice = !isAlice;
        }

        return !isAlice ? "Alice" : "Bob";
    }
};
