// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        int ans = INT_MAX;
        vector<int> freq(26, 0);
        for (int i = 0; i < text.size(); i++)
        {
            freq[text[i] - 'a']++;
        }
        ans = min(ans, freq[1]);
        ans = min(ans, freq[0]);
        ans = min(ans, freq[11] / 2);
        ans = min(ans, freq[14] / 2);
        ans = min(ans, freq[13]);
        return ans;
    }
};