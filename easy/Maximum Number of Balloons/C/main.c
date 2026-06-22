// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
int maxNumberOfBalloons(char *text)
{
    const int n = strlen(text);
    int ans = 100000;
    int a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[text[i] - 'a']++;
    }
    ans = fmin(ans, a[1]);
    ans = fmin(ans, a[0]);
    ans = fmin(ans, a[11] / 2);
    ans = fmin(ans, a[14] / 2);
    ans = fmin(ans, a[13]);
    return ans;
}