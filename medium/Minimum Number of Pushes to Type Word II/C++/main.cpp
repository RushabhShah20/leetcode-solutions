// Problem: Minimum Number of Pushes to Type Word II
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
class Solution
{
public:
    int minimumPushes(string word)
    {
        vector<int> freq(26, 0);
        for (const char c : word)
        {
            freq[c - 'a']++;
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (i < 8)
            {
                ans += (1 * freq[i]);
            }
            else if (i >= 8 && i < 16)
            {
                ans += (2 * freq[i]);
            }
            else if (i >= 16 && i < 24)
            {
                ans += (3 * freq[i]);
            }
            else
            {
                ans += (4 * freq[i]);
            }
        }
        return ans;
    }
};