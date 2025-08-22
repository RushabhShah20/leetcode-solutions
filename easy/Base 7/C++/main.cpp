// Problem: Base 7
// Link to the problem: https://leetcode.com/problems/base-7/
class Solution
{
public:
    string convertToBase7(int num)
    {
        int a = 0;
        if (num < 0)
        {
            return "-" + convertToBase7(-1 * num);
        }
        else if (num < 7)
        {
            return to_string(num);
        }
        else
        {
            return convertToBase7(num / 7) + convertToBase7(num % 7);
        }
    }
};