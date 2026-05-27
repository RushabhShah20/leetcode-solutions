// Problem: Count the Number of Special Characters II
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-ii/
class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        const int n = word.size();
        vector<int> a(26, -1), b(26, n + 1);
        for (int i = 0; i < n; i++)
        {
            const char c = word[i];
            if (islower(c))
            {
                a[c - 'a'] = max(a[c - 'a'], i);
            }
            else
            {
                b[c - 'A'] = min(b[c - 'A'], i);
            }
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != -1 && b[i] != n + 1 && a[i] < b[i])
            {
                ans++;
            }
        }
        return ans;
    }
};