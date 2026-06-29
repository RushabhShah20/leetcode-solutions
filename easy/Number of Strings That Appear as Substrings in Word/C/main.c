// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
int numOfStrings(char **patterns, int patternsSize, char *word)
{
    const int n = patternsSize;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (strstr(word, patterns[i]) != NULL)
        {
            ans++;
        }
    }
    return ans;
}