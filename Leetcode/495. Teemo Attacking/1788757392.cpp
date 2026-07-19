class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0, size = timeSeries.size();

        // 4 ms 
        // for (int i = 0; i < size; i++) {
        //     if (i + 1 < size) {
        //         if (timeSeries[i] + duration >= timeSeries[i + 1]) {
        //             ans += timeSeries[i + 1] - timeSeries[i];
        //         } else {
        //             ans += duration;
        //         }
        //     } else {
        //         ans += duration;
        //     }
        // }

        // // Iterate over time series
        // for (int i = 0; i < size - 1; i++) {
        //     // find gap between two time series endpoints
        //     int gap = timeSeries[i + 1] - timeSeries[i];

        //     // check if gap is greater than duration then add duration
        //     // else use gap and reset timer
        //     ans += (gap > duration) ? duration : gap;
        // }

        // // increse ans with duration because last element does not have any other element that going to compare.
        // ans += duration;

        // Space and Time Optimized Solution
        // Iterate over data
        for (int i = 0; i < size - 1; i++)
            ans += min(duration, timeSeries[i + 1] - timeSeries[i]); // get minimum value between gap and duration and addition it to it.

        // update last duration.
        ans += duration;

        return ans;
    }
};