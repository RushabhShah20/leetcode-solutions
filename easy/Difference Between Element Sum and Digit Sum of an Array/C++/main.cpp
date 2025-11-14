// Problem: Difference Between Element Sum and Digit Sum of an Array
// Link to the problem: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int ele_sum = 0, dig_sum = 0;
        for (int num : nums)
        {
            ele_sum += num;
            while (num > 0)
            {
                dig_sum += (num % 10);
                num /= 10;
            }
        }
        if (ele_sum > dig_sum)
        {
            return ele_sum - dig_sum;
        }
        else
        {
            return dig_sum - ele_sum;
        }
    }
};