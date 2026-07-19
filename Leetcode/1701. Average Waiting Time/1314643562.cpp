class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double currentTime = 0;
        double totalWaitingTime = 0;

        for (const auto& customer : customers) {
            int arrivalTime = customer[0];
            int processingTime = customer[1];

            // If the chef finishes before the next customer arrives, update the time to the arrival time of the next customer
            if (currentTime < arrivalTime) {
                currentTime = arrivalTime;
            }

            // Process the current customer
            currentTime += processingTime;

            // Calculate the waiting time for the current customer
            totalWaitingTime += (currentTime - arrivalTime);
        }

        // Calculate the average waiting time
        return totalWaitingTime / customers.size();
    }
};
