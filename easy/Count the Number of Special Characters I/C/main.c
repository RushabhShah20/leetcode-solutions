// Problem: Count the Number of Special Characters I
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
int numberOfSpecialChars(char *word)
{
    const int n = strlen(word);
    int ans = 0, lower[26] = {0}, upper[26] = {0};
    for (int i = 0; i < n; i++)
    {
        const char c = word[i];
        if (islower(c))
        {
            lower[c - 'a']++;
        }
        else
        {
            upper[c - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (lower[i] > 0 && upper[i] > 0)
        {
            ans++;
        }
    }
    return ans;
}