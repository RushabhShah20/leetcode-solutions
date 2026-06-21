// Problem: Minimum Lights to Illuminate a Road
// Link to the problem: https://leetcode.com/problems/minimum-lights-to-illuminate-a-road/
class Solution
{
public:
    int minLights(vector<int> &lights)
    {
        const int n = lights.size();
        vector<int> a(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (lights[i] > 0)
            {
                const int l = max(0, i - lights[i]), r = min(n - 1, i + lights[i]);
                a[l]++;
                a[r + 1]--;
            }
        }
        int ans = 0, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            x += a[i];
            if (x > 0)
            {
                if (y > 0)
                {
                    ans += (y + 2) / 3;
                    y = 0;
                }
            }
            else
            {
                y++;
            }
        }
        if (y > 0)
        {
            ans += (y + 2) / 3;
        }
        return ans;
    }
};