// Problem: Apply Operations to Make All Array Elements Equal to Zero
// Link to the problem: https://leetcode.com/problems/apply-operations-to-make-all-array-elements-equal-to-zero/
class Solution
{
public:
    bool checkArray(vector<int> &nums, int k)
    {
        const int n = nums.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (x > nums[i])
            {
                return false;
            }
            nums[i] -= x;
            x += nums[i];
            if (i >= k - 1)
            {
                x -= nums[i - k + 1];
            }
        }
        const bool ans = x == 0;
        return ans;
    }
};