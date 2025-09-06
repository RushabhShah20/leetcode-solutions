// Problem: Arithmetic Subarrays
// Link to the problem: https://leetcode.com/problems/arithmetic-subarrays/
class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        int n = nums.size(), m = l.size();
        vector<bool> ans(m, true);
        for (int i = 0; i < m; i++)
        {
            vector<int> a(nums.begin() + l[i], nums.begin() + r[i] + 1);
            sort(a.begin(), a.end());
            for (int j = 1; j < a.size() - 1; j++)
            {
                if ((a[j] - a[j - 1]) != (a[j + 1] - a[j]))
                {
                    ans[i] = false;
                    break;
                }
            }
        }
        return ans;
    }
};