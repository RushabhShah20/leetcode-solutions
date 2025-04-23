// Problem: Queries on Number of Points Inside a Circle
// Link to the problem: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
class Solution
{
public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
    {
        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); i++)
        {
            for (int j = 0; j < points.size(); j++)
            {
                if ((queries[i][2] * queries[i][2]) >= ((queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0]) + (queries[i][1] - points[j][1]) * (queries[i][1] - points[j][1])))
                {
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};