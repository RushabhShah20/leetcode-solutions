// Problem: Sum of Good Numbers
// Link to the problem: https://leetcode.com/problems/sum-of-good-numbers/
class Solution
{
public:
    int sumOfGoodNumbers(vector<int> &nums, int k)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i - k < 0)
            {
                if (nums[i] > nums[i + k])
                {
                    ans += nums[i];
                }
            }
            else if (i + k > nums.size() - 1)
            {
                if (nums[i] > nums[i - k])
                {
                    ans += nums[i];
                }
            }
            else
            {
                if (nums[i] > nums[i - k] && nums[i] > nums[i + k])
                {
                    ans += nums[i];
                }
            }
        }
        return ans;
    }
};