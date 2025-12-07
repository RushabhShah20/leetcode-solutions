// Problem: Count Odd Numbers in an Interval Range
// Link to the problem: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
class Solution
{
public:
    int countOdds(int low, int high)
    {
        int ans;
        if (low % 2 == 0)
        {
            ans = (high - low + 1) / 2;
        }
        else
        {
            ans = (high - low + 2) / 2;
        }
        return ans;
    }
};