// Problem: Rearrange Array by Removing Distinct Values
// Link to the problem: https://leetcode.com/problems/rearrange-array-by-removing-distinct-values/
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> a(101);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            a[nums[i]]++;
            mx = max(mx, a[nums[i]]);
        }
        vector<int> ans;
        for (int i = 1; i <= mx; i++)
        {
            for (int j = 1; j <= 100; j++)
            {
                if (a[j] >= i)
                {
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};