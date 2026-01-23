// Problem: A Number After a Double Reversal
// Link to the problem: https://leetcode.com/problems/a-number-after-a-double-reversal/
bool isSameAfterReversals(int num)
{
    if (num == 0)
    {
        return true;
    }
    if (num % 10 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}