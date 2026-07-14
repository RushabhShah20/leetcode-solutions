// Problem: Find the Number of Subsequences With Equal GCD
// Link to the problem: https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd/
class Solution
{
public:
    int subsequencePairCount(vector<int> &nums)
    {
        const int n = nums.size(), m = 1000000007;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
        }
        vector<vector<int>> a(mx + 1, vector<int>(mx + 1));
        a[0][0] = 1;
        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> b(mx + 1, vector<int>(mx + 1));
            for (int j = 0; j <= mx; j++)
            {
                const int x = __gcd(j, nums[i]);
                for (int k = 0; k <= mx; k++)
                {
                    const int z = a[j][k];
                    if (z == 0)
                    {
                        continue;
                    }
                    const int y = __gcd(k, nums[i]);
                    b[j][k] = (b[j][k] + z) % m;
                    b[x][k] = (b[x][k] + z) % m;
                    b[j][y] = (b[j][y] + z) % m;
                }
            }
            a.swap(b);
        }
        int ans = 0;
        for (int i = 1; i <= mx; i++)
        {
            ans = (ans + a[i][i]) % m;
        }
        return ans;
    }
};