// Problem: Valid Elements in an Array
// Link to the problem: https://leetcode.com/problems/valid-elements-in-an-array/
class Solution
{
public:
    vector<int> findValidElements(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            bool x = true, y = true;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] <= nums[j])
                {
                    x = false;
                    break;
                }
            }
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] <= nums[j])
                {
                    y = false;
                    break;
                }
            }
            if (x || y)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};