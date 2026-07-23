class Solution {
public:
    vector<double> getCollisionTimes(vector<vector<int>>& cars) {
        int n = cars.size();
        vector<double> res(n, -1);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {
            // Check the car ahead is slower or not.
            while(!st.empty() && cars[i][1] <= cars[st.top()][1])
                st.pop();

            while(!st.empty()) {
                double collisionTime = (double)(cars[st.top()][0] - cars[i][0]) / (cars[i][1] - cars[st.top()][1]);
                if(collisionTime <= res[st.top()] || res[st.top()] == -1) {
                    res[i] = collisionTime;
                    break;
                }

                st.pop();
            }
            st.push(i);
        }

        return res;
    }
};