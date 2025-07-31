// Problem: Minimum Operations to Make Binary Array Elements Equal to One I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int ans = 0;
        bool x = true;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (nums[i] == 0)
            {
                nums[i] = 1;
                if (nums[i + 1] == 0)
                {
                    nums[i + 1] = 1;
                }
                else
                {
                    nums[i + 1] = 0;
                }
                if (nums[i + 2] == 0)
                {
                    nums[i + 2] = 1;
                }
                else
                {
                    nums[i + 2] = 0;
                }
                ans++;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                x = false;
            }
        }
        if (x == false)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};