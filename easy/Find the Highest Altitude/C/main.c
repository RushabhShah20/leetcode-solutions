// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
int largestAltitude(int *gain, int gainSize)
{
    const int n = gainSize;
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        x += gain[i];
        ans = fmax(ans, x);
    }
    return ans;
}