// Problem: Add Minimum Number of Rungs
// Link to the problem: https://leetcode.com/problems/add-minimum-number-of-rungs/
int addRungs(int *rungs, int rungsSize, int dist)
{
    int ans = 0, prev = 0;
    for (int i = 0; i < rungsSize; i++)
    {
        if ((rungs[i] - prev) > dist)
        {
            if ((rungs[i] - prev) % dist == 0)
            {
                ans += (((rungs[i] - prev) / dist) - 1);
            }
            else
            {
                ans += ((rungs[i] - prev) / dist);
            }
        }
        prev = rungs[i];
    }
    return ans;
}