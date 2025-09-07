// Problem: Minimum Operations to Equalize Array
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-equalize-array/
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return 0;
        }
        else if (nums.size() == 2)
        {
            if (nums.front() == nums.back())
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] != nums[0])
                {
                    return 1;
                }
            }
            return 0;
        }
    }
};