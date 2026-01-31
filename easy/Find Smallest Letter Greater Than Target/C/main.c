// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
char nextGreatestLetter(char *letters, int lettersSize, char target)
{
    const int n = lettersSize;
    int l = 0, r = n - 1;
    char ans = letters[0];
    while (l <= r)
    {
        const int m = l + (r - l) / 2;
        if (letters[m] > target)
        {
            ans = letters[m];
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return ans;
}