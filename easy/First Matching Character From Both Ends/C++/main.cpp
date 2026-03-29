// Problem: First Matching Character From Both Ends
// Link to the problem: https://leetcode.com/problems/first-matching-character-from-both-ends/
class Solution
{
public:
    int firstMatchingIndex(string s)
    {
        const int n = s.size();
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                return i;
            }
        }
        return -1;
    }
};