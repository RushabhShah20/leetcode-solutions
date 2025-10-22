// Problem: Check if All the Integers in a Range Are Covered
// Link to the problem: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
class Solution
{
public:
    bool isCovered(vector<vector<int>> &ranges, int left, int right)
    {
        vector<bool> covered(right + 1, false);
        for (vector<int> range : ranges)
        {
            for (int i = range[0]; i <= range[1]; i++)
            {
                covered[i] = true;
            }
        }
        for (int i = left; i <= right; i++)
        {
            if (covered[i] == false)
            {
                return false;
            }
        }
        return true;
    }
};