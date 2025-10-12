// Problem: Longest Balanced Substring I
// Link to the problem: https://leetcode.com/problems/longest-balanced-substring-i/
class Solution
{
public:
    bool isBalanced(int freq[], int k, int targetFreq)
    {
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                if (freq[i] != targetFreq)
                {
                    return false;
                }
                count++;
            }
        }
        return count == k;
    }
    int longestBalanced(string s)
    {
        int n = s.length();
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            int freq[26] = {0};
            int count = 0;
            for (int j = i; j < n; j++)
            {
                int ch = s[j] - 'a';
                if (freq[ch] == 0)
                {
                    count++;
                }
                freq[ch]++;
                int len = j - i + 1;
                if (len % count == 0)
                {
                    int targetFreq = len / count;
                    if (isBalanced(freq, count, targetFreq))
                    {
                        ans = max(ans, len);
                    }
                }
            }
        }
        return ans;
    }
};