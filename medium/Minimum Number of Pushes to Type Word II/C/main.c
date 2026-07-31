// Problem: Minimum Number of Pushes to Type Word II
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
int comp(const void *x, const void *y)
{
    return (*(int *)y - *(int *)x);
}
int minimumPushes(char *word)
{
    const int n = strlen(word);
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        a[word[i] - 'a']++;
    }
    qsort(a, 26, sizeof(int), comp);
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (i < 8)
        {
            ans += (1 * a[i]);
        }
        else if (i >= 8 && i < 16)
        {
            ans += (2 * a[i]);
        }
        else if (i >= 16 && i < 24)
        {
            ans += (3 * a[i]);
        }
        else
        {
            ans += (4 * a[i]);
        }
    }
    return ans;
}