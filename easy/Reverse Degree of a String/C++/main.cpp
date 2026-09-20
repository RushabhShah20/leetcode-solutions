// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
class Solution
{
public:
    int reverseDegree(string s)
    {
        const int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (26 - (s[i] - 'a')) * (i + 1);
        }
        return ans;
    }
};