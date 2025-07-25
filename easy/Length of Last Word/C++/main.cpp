// Problem: Length of Last Word
// Link to the problem: https://leetcode.com/problems/length-of-last-word/
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int end = s.size() - 1;
        while (end >= 0 && s[end] == ' ')
        {
            end--;
        }
        int start = end;
        while (start >= 0 && s[start] != ' ')
        {
            start--;
        }
        return end - start;
    }
};