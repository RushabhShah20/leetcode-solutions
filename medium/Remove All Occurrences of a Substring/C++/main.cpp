// Problem: Remove All Occurrences of a Substring
// Link to the problem: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int m = part.size(), n = s.size();
        while (s.find(part) != s.npos)
        {
            s.erase(s.find(part), part.size());
        }
        return s;
    }
};