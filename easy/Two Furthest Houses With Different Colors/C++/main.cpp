// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {
        const int n = colors.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (colors[i] != colors[j])
                {
                    ans = max(abs(i - j), ans);
                }
            }
        }
        return ans;
    }
};