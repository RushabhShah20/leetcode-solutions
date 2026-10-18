// Problem: Number of Ways to Reorder Array to Get Same BST
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/
class Solution
{
public:
    long long m = 1000000007;
    vector<vector<long long>> a;
    long long dfs(vector<int> &nums)
    {
        const int n = nums.size();
        if (n < 3)
        {
            return 1;
        }
        vector<int> l, r;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < nums[0])
            {
                l.push_back(nums[i]);
            }
            else
            {
                r.push_back(nums[i]);
            }
        }
        const long long x = dfs(l) % m, y = dfs(r) % m, ans = ((x * y) % m * a[n - 1][l.size()]) % m;
        return ans;
    }
    int numOfWays(vector<int> &nums)
    {
        const int n = nums.size();
        a.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            a[i] = vector<long long>(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % m;
            }
        }
        const long long ans = (dfs(nums) - 1) % m;
        return ans;
    }
};