// Problem: Rearrange Characters to Make Target String
// Link to the problem: https://leetcode.com/problems/rearrange-characters-to-make-target-string/
class Solution
{
public:
    int rearrangeCharacters(string s, string target)
    {
        int ans = INT_MAX;
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        vector<int> targetFreq(26, 0);
        for (int i = 0; i < target.size(); i++)
        {
            targetFreq[target[i] - 'a']++;
        }
        for (int i = 0; i < target.size(); i++)
        {
            ans = min(ans, freq[target[i] - 'a'] / targetFreq[target[i] - 'a']);
        }
        return ans;
    }
};