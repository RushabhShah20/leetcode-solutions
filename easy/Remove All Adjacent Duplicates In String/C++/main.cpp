// Problem: Remove All Adjacent Duplicates In String
// Link to the problem: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
class Solution
{
public:
    string removeDuplicates(string s)
    {
        for (int i = s.size() - 1; i > 0; i--)
        {
            if (s[i] == s[i - 1])
            {
                s.erase(i - 1, 2);
            }
        }
        return s;
    }
};