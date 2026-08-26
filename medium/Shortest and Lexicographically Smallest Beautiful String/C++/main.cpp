// Problem: Shortest and Lexicographically Smallest Beautiful String
// Link to the problem: https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string/
class Solution
{
public:
    string shortestBeautifulSubstring(string s, int k)
    {
        const int n = s.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x += s[i] - '0';
        }
        if (x < k)
        {
            return "";
        }
        string ans = s;
        int y = 0, l = 0;
        for (int r = 0; r < n; r++)
        {
            y += s[r] - '0';
            while (y > k || s[l] == '0')
            {
                y -= s[l] - '0';
                l++;
            }
            if (y == k)
            {
                string t = s.substr(l, r - l + 1);
                if (t.size() < ans.size() || t.size() == ans.size() && t < ans)
                {
                    ans = t;
                }
            }
        }
        return ans;
    }
};