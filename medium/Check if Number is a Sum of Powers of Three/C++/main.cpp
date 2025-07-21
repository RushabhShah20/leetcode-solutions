// Problem: Check if Number is a Sum of Powers of Three
// Link to the problem: https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/
class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        while (n > 0)
        {
            int x = n % 3;
            if (x == 2)
            {
                return false;
            }
            n /= 3;
        }
        return true;
    }
};