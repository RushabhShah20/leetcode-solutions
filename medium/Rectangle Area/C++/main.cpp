// Problem: Rectangle Area
// Link to the problem: https://leetcode.com/problems/rectangle-area/
class Solution
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        const int p = max(0, min(ax2, bx2) - max(ax1, bx1)), q = max(0, min(ay2, by2) - max(ay1, by1));
        const long long a = (ax2 - ax1) * (ay2 - ay1), b = (bx2 - bx1) * (by2 - by1), c = p * q;
        const int ans = a + b - c;
        return ans;
    }
};