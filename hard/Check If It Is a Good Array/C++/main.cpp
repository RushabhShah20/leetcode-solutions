// Problem: Check If It Is a Good Array
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-good-array/
class Solution
{
public:
    bool isGoodArray(vector<int> &nums)
    {
        int gcd = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            gcd = __gcd(nums[i], gcd);
            if (gcd == 1)
            {
                break;
            }
        }
        if (gcd == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};