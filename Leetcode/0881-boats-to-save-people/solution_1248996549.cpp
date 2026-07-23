class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int sum = 0, count = 0;
        for(int i = people.size() - 1; i >= 0; i--) {
            if(sum + people[i] <= limit) {
                sum += people[i];
            } else {
                sum = people[i];
                count++;
            }
        }

        return count + 1;
    }
};