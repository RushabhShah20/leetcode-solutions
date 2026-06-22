// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        const int n = text.size();
        int ans = 100000;
        vector<int> a(26, 0);
        for (int i = 0; i < n; i++)
        {
            a[text[i] - 'a']++;
        }
        ans = min(ans, a[1]);
        ans = min(ans, a[0]);
        ans = min(ans, a[11] / 2);
        ans = min(ans, a[14] / 2);
        ans = min(ans, a[13]);
        return ans;
    }
};