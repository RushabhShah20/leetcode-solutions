// Problem: Array With Elements Not Equal to Average of Neighbors
// Link to the problem: https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors/
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j = 0, k = ((n % 2 == 0) ? (n / 2) : (n / 2 + 1));
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = nums[j];
                j++;
            }
            else
            {
                ans[i] = nums[k];
                k++;
            }
        }
        return ans;
    }
};