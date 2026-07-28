// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
char *smallestPalindrome(char *s)
{
    const int n = strlen(s);
    int a[26] = {0};
    for (int i = 0; i < n / 2; i++)
    {
        a[s[i] - 'a']++;
    }
    int l = 0, r = n - 1;
    for (int i = 0; i < 26; i++)
    {
        while (a[i] > 0)
        {
            const char c = 'a' + i;
            s[l] = c;
            s[r] = c;
            l++;
            r--;
            a[i]--;
        }
    }
    return s;
}