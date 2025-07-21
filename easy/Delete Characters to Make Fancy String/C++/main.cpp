// Problem: Delete Characters to Make Fancy String
// Link to the problem: https://leetcode.com/problems/delete-characters-to-make-fancy-string/
class Solution
{
public:
    string makeFancyString(string s)
    {
        string result;
        for (char c : s)
        {
            if (result.size() >= 2 && result.back() == c && result[result.size() - 2] == c)
            {
                continue;
            }
            result.push_back(c);
        }
        return result;
    }
};