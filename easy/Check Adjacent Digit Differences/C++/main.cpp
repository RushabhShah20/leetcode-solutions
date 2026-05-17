// Problem: Check Adjacent Digit Differences
// Link to the problem: https://leetcode.com/problems/check-adjacent-digit-differences/
class Solution
{
public:
    bool isAdjacentDiffAtMostTwo(string s)
    {
        const int n = s.size();
        for (int i = 1; i < n; i++)
        {
            if (abs(s[i] - s[i - 1]) > 2)
            {
                return false;
            }
        }
        return true;
    }
};