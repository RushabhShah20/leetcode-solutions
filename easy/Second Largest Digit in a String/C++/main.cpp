// Problem: Second Largest Digit in a String
// Link to the problem: https://leetcode.com/problems/second-largest-digit-in-a-string/
class Solution
{
public:
    int secondHighest(string s)
    {
        set<int> x;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                int y = s[i] - '0';
                x.insert(y);
            }
        }
        if (x.size() <= 1)
        {
            return -1;
        }
        else
        {
            return *next(x.begin(), x.size() - 2);
        }
    }
};