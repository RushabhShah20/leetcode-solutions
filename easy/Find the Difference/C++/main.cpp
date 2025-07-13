// Problem: Find the Difference
// Link to the problem: https://leetcode.com/problems/find-the-difference/
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int sumS = 0, sumT = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (i < s.size())
            {
                sumS += (s[i] - 'a');
                sumT += (t[i] - 'a');
            }
            else
            {
                sumT += (t[i] - 'a');
            }
        }
        return (sumT - sumS) + 'a';
    }
};