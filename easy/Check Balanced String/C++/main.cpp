// Problem: Check Balanced String
// Link to the problem: https://leetcode.com/problems/check-balanced-string/
class Solution
{
public:
    bool isBalanced(string num)
    {
        int even = 0, odd = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (i % 2 == 0)
            {
                even += (num[i] - 48);
            }
            else
            {
                odd += (num[i] - 48);
            }
        }
        return even == odd;
    }
};