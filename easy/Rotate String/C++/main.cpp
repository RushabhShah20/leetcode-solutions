// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
        {
            return false;
        }
        else
        {
            s = s + s;
            const bool ans = s.find(goal) == s.npos;
            return ans;
        }
    }
};