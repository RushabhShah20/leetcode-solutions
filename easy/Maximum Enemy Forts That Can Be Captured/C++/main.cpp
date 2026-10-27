// Problem: Maximum Enemy Forts That Can Be Captured
// Link to the problem: https://leetcode.com/problems/maximum-enemy-forts-that-can-be-captured/
class Solution
{
public:
    int captureForts(vector<int> &forts)
    {
        const int n = forts.size();
        int ans = 0, j = 0;
        for (int i = 0; i < n; i++)
        {
            if (forts[i] != 0)
            {
                if (forts[j] == -forts[i])
                {
                    ans = max(ans, i - j - 1);
                }
                j = i;
            }
        }
        return ans;
    }
};