// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
int maxDistance(int *colors, int colorsSize)
{
    const int n = colorsSize;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (colors[i] != colors[j])
            {
                ans = fmax(abs(i - j), ans);
            }
        }
    }
    return ans;
}