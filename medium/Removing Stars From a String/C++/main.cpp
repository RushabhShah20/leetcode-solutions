// Problem: Removing Stars From a String
// Link to the problem: https://leetcode.com/problems/removing-stars-from-a-string/
class Solution
{
public:
    string removeStars(string s)
    {
        while (s.find('*') != s.npos)
        {
            size_t index = s.find('*');
            s.erase(index - 1, 2);
        }
        return s;
    }
};