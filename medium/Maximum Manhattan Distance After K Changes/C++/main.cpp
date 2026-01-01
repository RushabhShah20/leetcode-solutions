// Problem: Maximum Manhattan Distance After K Changes
// Link to the problem: https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/
class Solution
{
public:
    int maxDistance(string s, int k)
    {
        int n = s.size(), ans = 0, north = 0, south = 0, west = 0, east = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                north++;
            }
            else if (s[i] == 'S')
            {
                south++;
            }
            else if (s[i] == 'W')
            {
                west++;
            }
            else
            {
                east++;
            }
            ans = max(ans, abs(north - south) + abs(west - east) + min(2 * k, i + 1 - (abs(north - south) + abs(west - east))));
        }
        return ans;
    }
};