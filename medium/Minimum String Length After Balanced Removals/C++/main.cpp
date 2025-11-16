// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
class Solution
{
public:
    int minLengthAfterRemovals(string s)
    {
        int ans = 0;
        for (char c : s)
        {
            ans += c == 'a' ? 1 : -1;
        }
        return abs(ans);
    }
};
