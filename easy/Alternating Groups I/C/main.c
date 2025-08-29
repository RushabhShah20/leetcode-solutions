// Problem: Alternating Groups I
// Link to the problem: https://leetcode.com/problems/alternating-groups-i/
int numberOfAlternatingGroups(int *colors, int colorsSize)
{
    int ans = 0;
    for (int i = 1; i < colorsSize - 1; i++)
    {
        if (colors[i] != colors[i - 1] && colors[i] != colors[i + 1])
        {
            ans++;
        }
    }
    if (colors[0] != colors[1] && colors[0] != colors[colorsSize - 1])
    {
        ans++;
    }
    if (colors[colorsSize - 1] != colors[colorsSize - 2] && colors[colorsSize - 1] != colors[0])
    {
        ans++;
    }
    return ans;
}