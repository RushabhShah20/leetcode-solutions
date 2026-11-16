// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
char *digitSum(char *s, int k)
{
    int n = (int)strlen(s);
    char *ans = (char *)malloc(n + 1);
    strcpy(ans, s);
    while (n > k)
    {
        char *t = (char *)malloc(n + 1);
        int len = 0;
        for (int i = 0; i < n; i += k)
        {
            int x = 0;
            int end = (i + k < n) ? (i + k) : n;
            for (int j = i; j < end; ++j)
            {
                x += ans[j] - '0';
            }
            len += sprintf(t + len, "%d", x);
        }
        free(ans);
        ans = t;
        n = len;
    }
    return ans;
}