class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> dir, rad;

        for(int i = 0; i < senate.length(); i++) {
            if(senate[i] == 'R') {
                rad.push(i);
            } else {
                dir.push(i);
            }
        }

        int n = senate.length();
        while(!rad.empty() && !dir.empty()) {
            if(rad.front() <= dir.front()) {
                rad.push(n++);
            } else {
                dir.push(n++);
            }

            rad.pop(); dir.pop();
        }

        return rad.empty() ? "Dire" : "Radiant";
    }
};