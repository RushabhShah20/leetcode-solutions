// Problem: Path Crossing
// Link to the problem: https://leetcode.com/problems/path-crossing/
class Solution
{
public:
    bool isPathCrossing(string path)
    {
        set<vector<int>> points = {{0, 0}};
        vector<int> curr = {0, 0};
        for (int i = 0; i < path.size(); i++)
        {
            if (path[i] == 'N')
            {
                curr[0]++;
            }
            else if (path[i] == 'S')
            {
                curr[0]--;
            }
            else if (path[i] == 'W')
            {
                curr[1]--;
            }
            else if (path[i] == 'E')
            {
                curr[1]++;
            }
            if (points.find(curr) == points.end())
            {
                points.insert(curr);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};