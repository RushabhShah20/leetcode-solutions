// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> ans, even, odd;
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
        for (int i = 0; i < even.size(); i++)
        {
            ans.push_back(even[i]);
        }
        for (int i = 0; i < odd.size(); i++)
        {
            ans.push_back(odd[i]);
        }
        return ans;
    }
};