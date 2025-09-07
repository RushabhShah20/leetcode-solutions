// Problem: Find N Unique Integers Sum up to Zero
// Link to the problem: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = 2 * i - n + 1;
        }
        return ans;
    }
};