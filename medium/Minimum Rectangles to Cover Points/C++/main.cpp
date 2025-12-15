// Problem: Minimum Rectangles to Cover Points
// Link to the problem: https://leetcode.com/problems/minimum-rectangles-to-cover-points/
class Solution
{
public:
    int minRectanglesToCoverPoints(vector<vector<int>> &points, int w)
    {
        sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b)
             {if(a[0]==b[0]){return a[1]<b[1];}else{return a[0]<b[0];} });
        int ans = 1, x = points[0][0];
        for (const vector<int> point : points)
        {
            if (x + w < point[0])
            {
                x = point[0];
                ans++;
            }
        }
        return ans;
    }
};