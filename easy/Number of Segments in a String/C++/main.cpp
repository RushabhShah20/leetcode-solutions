// Problem: Number of Segments in a String
// Link to the problem: https://leetcode.com/problems/number-of-segments-in-a-string/
class Solution
{
public:
    int countSegments(string s)
    {
        const int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ')
            {
                ans++;
            }
        }
        return ans;
    }
};