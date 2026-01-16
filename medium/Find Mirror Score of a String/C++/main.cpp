// Problem: Find Mirror Score of a String
// Link to the problem: https://leetcode.com/problems/find-mirror-score-of-a-string/
class Solution
{
public:
    long long calculateScore(string s)
    {
        const int n = s.size();
        long long ans = 0;
        vector<stack<int>> prev(26);
        for (int i = 0; i < n; i++)
        {
            const int curr = s[i] - 'a', mirror = 25 - curr;
            if (!prev[mirror].empty())
            {
                const int j = prev[mirror].top();
                prev[mirror].pop();
                ans += (i - j);
            }
            else
            {
                prev[curr].push(i);
            }
        }
        return ans;
    }
};