// Problem: Largest Even Number
// Link to the problem: https://leetcode.com/problems/largest-even-number/
class Solution
{
public:
    string largestEven(string s)
    {
        int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                s.erase(i, 1);
            }
            else
            {
                break;
            }
        }
        return s;
    }
};