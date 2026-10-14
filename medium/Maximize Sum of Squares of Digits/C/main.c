// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
char *maxSumOfSquares(int num, int sum)
{
    if (sum < 1 || sum > 9 * num)
    {
        char *ans = (char *)malloc(1);
        if (ans != NULL)
        {
            ans[0] = '\0';
        }
        return ans;
    }
    char *ans = (char *)malloc(num + 1);
    if (ans == NULL)
    {
        return NULL;
    }
    int i = 0;
    const int x = sum / 9, y = sum % 9;
    memset(ans, '9', x);
    i += x;
    if (y > 0)
    {
        ans[i] = (char)(y + '0');
        i++;
    }
    memset(ans + i, '0', num - i);
    ans[num] = '\0';
    return ans;
}