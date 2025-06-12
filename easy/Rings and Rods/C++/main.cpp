// Problem: Rings and Rods
// Link to the problem: https://leetcode.com/problems/rings-and-rods/
class Solution
{
public:
    int countPoints(string rings)
    {
        int ans = 0;
        vector<int> r(10, 0);
        vector<int> g(10, 0);
        vector<int> b(10, 0);
        for (int i = 0; i < rings.size(); i += 2)
        {
            if (rings[i] == 'R')
            {
                r[rings[i + 1] - 48]++;
            }
            else if (rings[i] == 'G')
            {
                g[rings[i + 1] - 48]++;
            }
            else
            {
                b[rings[i + 1] - 48]++;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (r[i] > 0 && g[i] > 0 && b[i] > 0)
            {
                ans++;
            }
        }
        return ans;
    }
};