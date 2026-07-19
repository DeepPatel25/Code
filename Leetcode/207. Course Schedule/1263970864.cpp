class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> gr(numCourses);
        vector<int> indegrees(numCourses, 0);

        for(const auto& prerequisite : prerequisites) {
            int course = prerequisite[0];
            int pre_course = prerequisite[1];
            gr[pre_course].push_back(course);
            indegrees[course]++;
        }

        queue<int> q;
        for(int course = 0; course < numCourses; course++) {
            if(indegrees[course] == 0) {
                q.push(course);
            }
        }

        while(!q.empty()) {
            int course = q.front();
            q.pop();

            for(int next_course : gr[course]) {
                if(--indegrees[next_course] == 0) {
                    q.push(next_course);
                }
            }
        }

        for(int indegree: indegrees) {
            if(indegree > 0) return false;
        }

        return true;
    }
};