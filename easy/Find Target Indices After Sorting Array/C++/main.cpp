// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        const int n = nums.size();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < target)
            {
                x++;
            }
            else if (nums[i] == target)
            {
                y++;
            }
        }
        vector<int> ans;
        for (int i = x; i < x + y; i++)
        {
            ans.push_back(i);
        }
        return ans;
    }
};