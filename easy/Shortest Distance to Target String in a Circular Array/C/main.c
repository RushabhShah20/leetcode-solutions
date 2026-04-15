// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
int closestTarget(char **words, int wordsSize, char *target, int startIndex)
{
    const int n = wordsSize;
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(words[i], target) == 0)
        {
            const int x = abs(i - startIndex);
            ans = fmin(ans, fmin(x, n - x));
        }
    }
    return ans == n ? -1 : ans;
}