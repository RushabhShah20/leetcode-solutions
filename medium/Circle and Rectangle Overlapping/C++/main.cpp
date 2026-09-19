// Problem: Circle and Rectangle Overlapping
// Link to the problem: https://leetcode.com/problems/circle-and-rectangle-overlapping/
class Solution
{
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
    {
        const long long a = x1 - xCenter, b = x2 - xCenter, c = y1 - yCenter, d = y2 - yCenter;
        const long long z = (xCenter < x1 || xCenter > x2 ? min(a * a, b * b) : 0) + (yCenter < y1 || yCenter > y2 ? min(c * c, d * d) : 0);
        const bool ans = z <= radius * radius;
        return ans;
    }
};