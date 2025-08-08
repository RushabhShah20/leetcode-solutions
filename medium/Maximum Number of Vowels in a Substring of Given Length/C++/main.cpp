// Problem: Maximum Number of Vowels in a Substring of Given Length
// Link to the problem: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int ans = 0, count = 0, n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (i >= k)
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    count++;
                }
                if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u')
                {
                    count--;
                }
            }
            else
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    count++;
                }
            }
            if (i >= (k - 1))
            {
                ans = max(ans, count);
            }
        }
        return ans;
    }
};