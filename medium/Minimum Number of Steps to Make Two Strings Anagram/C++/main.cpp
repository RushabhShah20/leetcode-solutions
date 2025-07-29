// Problem: Minimum Number of Steps to Make Two Strings Anagram
// Link to the problem: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
class Solution
{
public:
    int minSteps(string s, string t)
    {
        int ans = 0, n = s.size();
        vector<int> freqS(26, 0), freqT(26, 0);
        for (int i = 0; i < n; i++)
        {
            freqS[s[i] - 'a']++;
            freqT[t[i] - 'a']++;
        }
        for (int i = 0; i < freqS.size(); i++)
        {
            if (freqT[i] < freqS[i])
            {
                ans += abs(freqS[i] - freqT[i]);
            }
        }
        return ans;
    }
};