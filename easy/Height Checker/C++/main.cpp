// Problem: Height Checker
// Link to the problem: https://leetcode.com/problems/height-checker/
class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> sortedHeights = heights;
        sort(sortedHeights.begin(), sortedHeights.end());
        int ans = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != sortedHeights[i])
            {
                ans++;
            }
        }
        return ans;
    }
};