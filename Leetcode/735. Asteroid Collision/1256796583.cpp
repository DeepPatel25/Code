class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        
        for (int asteroid : asteroids) {
            if (asteroid > 0) {
                ans.push_back(asteroid);
            } else {
                while (!ans.empty() && ans.back() > 0 && ans.back() < -asteroid) {
                    ans.pop_back();
                }
                if (ans.empty() || ans.back() < 0) {
                    ans.push_back(asteroid);
                } else if (ans.back() == -asteroid) {
                    ans.pop_back();
                }
            }
        }
        
        return ans;
    }
};