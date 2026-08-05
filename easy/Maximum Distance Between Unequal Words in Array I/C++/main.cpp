// Problem: Maximum Distance Between Unequal Words in Array I
// Link to the problem: https://leetcode.com/problems/maximum-distance-between-unequal-words-in-array-i/
class Solution
{
public:
    int maxDistance(vector<string> &words)
    {
        const int n = words.size();
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (words[i] != words[0])
            {
                ans = i + 1;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (words[i] != words[n - 1])
            {
                ans = max(ans, n - i);
                break;
            }
        }
        return ans;
    }
};