// Problem: Defuse the Bomb
// Link to the problem: https://leetcode.com/problems/defuse-the-bomb/
class Solution
{
public:
    vector<int> decrypt(vector<int> &code, int k)
    {
        int n = code.size();
        vector<int> nums(2 * n);
        for (int i = 0; i < n; i++)
        {
            nums[i] = code[i];
            nums[n + i] = code[i];
        }
        if (k > 0)
        {
            vector<int> prefix(2 * n, 0);
            prefix[0] = nums[0];
            for (int i = 1; i < 2 * n; i++)
            {
                prefix[i] = prefix[i - 1] + nums[i];
            }
            vector<int> ans(n, 0);
            for (int i = 0; i < n; i++)
            {
                ans[i] = prefix[i + k] - prefix[i];
            }
            return ans;
        }
        else if (k < 0)
        {
            vector<int> prefix(2 * n, 0);
            prefix[0] = nums[0];
            for (int i = 1; i < 2 * n; i++)
            {
                prefix[i] = prefix[i - 1] + nums[i];
            }
            vector<int> ans(n, 0);
            for (int i = 0; i < n; i++)
            {
                ans[i] = prefix[n + i - 1] - prefix[n + i + k - 1];
            }
            return ans;
        }
        else
        {
            vector<int> ans(n, 0);
            return ans;
        }
    }
};