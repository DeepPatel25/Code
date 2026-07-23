class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time = customers[0][0] + customers[0][1];
        int waitingTime = 0;

        for(int i = 0; i < customers.size(); i++) {
            if(i != 0) {
                time += customers[i][1];
            }
            cout << time << " Time" << endl;
            waitingTime += (time - customers[i][0]);
            cout << waitingTime << ' ' << endl;
        }

        return (double)waitingTime / customers.size();
    }
};