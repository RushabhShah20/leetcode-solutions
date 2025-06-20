// Problem: Number Of Rectangles That Can Form The Largest Square
// Link to the problem: https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
class Solution
{
public:
    int countGoodRectangles(vector<vector<int>> &rectangles)
    {
        int ans = 0, maxElement = 0;
        for (int i = 0; i < rectangles.size(); i++)
        {
            maxElement = max(maxElement, (min(rectangles[i][0], rectangles[i][1])));
        }
        for (int i = 0; i < rectangles.size(); i++)
        {
            if (min(rectangles[i][0], rectangles[i][1]) == maxElement)
            {
                ans++;
            }
        }
        return ans;
    }
};