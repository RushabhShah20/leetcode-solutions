// Problem: Maximum Substrings With Distinct Start
// Link to the problem: https://leetcode.com/problems/maximum-substrings-with-distinct-start/
class Solution
{
public:
    int maxDistinct(string s)
    {
        set<char> a;
        for (const char c : s)
        {
            a.insert(c);
        }
        const int ans = a.size();
        return ans;
    }
};