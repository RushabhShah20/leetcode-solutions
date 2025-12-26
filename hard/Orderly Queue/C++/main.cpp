// Problem: Orderly Queue
// Link to the problem: https://leetcode.com/problems/orderly-queue/
class Solution
{
public:
    string orderlyQueue(string s, int k)
    {
        if (k > 1)
        {
            sort(s.begin(), s.end());
            return s;
        }
        else
        {
            int n = s.size();
            string ans = s;
            for (int i = 1; i < n; i++)
            {
                ans = min(ans, s.substr(i) + s.substr(0, i));
            }
            return ans;
        }
    }
};