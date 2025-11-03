// Problem: Minimum Time to Make Rope Colorful
// Link to the problem: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
int minCost(char *colors, int *neededTime, int neededTimeSize)
{
    int n = strlen(colors), ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (colors[i] == colors[i - 1])
        {
            ans += (fmin(neededTime[i], neededTime[i - 1]));
            neededTime[i] = fmax(neededTime[i], neededTime[i - 1]);
        }
    }
    return ans;
}