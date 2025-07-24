// Problem: Find Nearest Point That Has the Same X or Y Coordinate
// Link to the problem: https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        vector<bool> dist(points.size(), true);
        for (int i = 0; i < points.size(); i++)
        {
            if (points[i][0] != x && points[i][1] != y)
            {
                dist[i] = false;
            };
        }
        int minDist = INT_MAX;
        for (int i = 0; i < points.size(); i++)
        {
            if (dist[i] == true)
            {
                minDist = min(minDist, abs(points[i][0] - x) + abs(points[i][1] - y));
            }
        }
        for (int i = 0; i < points.size(); i++)
        {
            if ((abs(points[i][0] - x) + abs(points[i][1] - y)) == minDist)
            {
                if (dist[i] == true)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};