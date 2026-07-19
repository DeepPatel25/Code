class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mini = INT_MAX;

        for (int i = 0; i < landStartTime.size(); i++) {
            int time = landStartTime[i] + landDuration[i];

            for (int j = 0; j < waterStartTime.size(); j++) {
                time = max(time, waterStartTime[j]);
                time += waterDuration[j];

                mini = min(mini, time);
            }
        }

        for (int i = 0; i < waterStartTime.size(); i++) {
            int time;

            for (int j = 0; j < landStartTime.size(); j++) {
                time = max(waterStartTime[i] + waterDuration[i], landStartTime[j]);
                time += landDuration[j];

                mini = min(mini, time);
            }
        }

        return mini;
    }
};