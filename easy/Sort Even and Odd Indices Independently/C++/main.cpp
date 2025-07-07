// Problem: Sort Even and Odd Indices Independently
// Link to the problem: https://leetcode.com/problems/sort-even-and-odd-indices-independently/
class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        vector<int> even, odd;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        vector<int> ans(nums.size());
        for (int i = 0; i < ans.size(); i++)
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