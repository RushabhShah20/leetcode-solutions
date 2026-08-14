// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
int maximumLengthSubstring(char *s)
{
    const int n = strlen(s);
    int i = 0, j = 0, ans = 0;
    int a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
    }
    while (j < n)
    {
        a[s[j] - 'a']++;
        while (a[s[j] - 'a'] > 2 && i < n)
        {
            a[s[i] - 'a']--;
            i++;
        }
        ans = fmax(ans, j - i + 1);
        j++;
    }
    return ans;
}