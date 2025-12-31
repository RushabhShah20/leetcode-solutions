// Problem: Course Schedule
// Link to the problem: https://leetcode.com/problems/course-schedule/
class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> adj(numCourses);
        vector<int> inDegree(numCourses, 0);
        for (const vector<int> &prerequisite : prerequisites)
        {
            adj[prerequisite[1]].push_back(prerequisite[0]);
            inDegree[prerequisite[0]]++;
        }
        queue<int> q;
        for (int i = 0; i < numCourses; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }
        int count = 0;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            count++;
            for (int v : adj[u])
            {
                inDegree[v]--;
                if (inDegree[v] == 0)
                {
                    q.push(v);
                }
            }
        }
        const bool ans = (count == numCourses);
        return ans;
    }
};