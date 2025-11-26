// Problem: Minimum Length of String After Deleting Similar Ends
// Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/
class Solution
{
public:
    int minimumLength(string s)
    {
        int n = s.size(), i = 0, j = n - 1;
        while (i < j && s[i] == s[j])
        {
            char c = s[i];
            while (i <= j && s[i] == c)
            {
                i++;
            }
            while (i <= j && s[j] == c)
            {
                j--;
            }
        }
        const int ans = j - i + 1;
        return ans;
    }
};