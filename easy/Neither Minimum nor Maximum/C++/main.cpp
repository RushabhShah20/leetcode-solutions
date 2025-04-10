// Problem: Neither Minimum nor Maximum
// Link to the problem: https://leetcode.com/problems/neither-minimum-nor-maximum/
class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int ans = 0, max = *max_element(nums.begin(), nums.end()), min = *min_element(nums.begin(), nums.end());
        if (nums.size() == 1)
        {
            nums.empty();
            ans = -1;
        }
        else if (nums.size() == 2)
        {
            nums.empty();
            ans = -1;
        }
        else
        {
            nums.erase(remove(nums.begin(), nums.end(), min), nums.end());
            nums.erase(remove(nums.begin(), nums.end(), max), nums.end());
            ans = nums[0];
        }
        return ans;
    }
};