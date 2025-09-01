// Problem: Minimum Length of String After Operations
// Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-operations/
class Solution
{
public:
    int minimumLength(string s)
    {
        int ans = 0;
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 0 && freq[i] > 0)
            {
                ans += 2;
            }
            if (freq[i] % 2 != 0 && freq[i] > 0)
            {
                ans += 1;
            }
        }
        return ans;
    }
};