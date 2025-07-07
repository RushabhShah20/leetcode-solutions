// Problem: Minimize String Length
// Link to the problem: https://leetcode.com/problems/minimize-string-length/
class Solution
{
public:
    int minimizedStringLength(string s)
    {
        set<char> ans(s.begin(), s.end());
        return ans.size();
    }
};