// Problem: Sort Array By Parity II
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity-ii/
class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        vector<int> even, odd;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = even[i / 2];
            }
            else
            {
                ans[i] = odd[i / 2];
            }
        }
        return ans;
    }
};