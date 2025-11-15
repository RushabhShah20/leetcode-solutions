// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
bool canAliceWin(int *nums, int numsSize)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] / 10 == 0)
        {
            x += nums[i];
        }
        else
        {
            y += nums[i];
        }
    }
    return x != y;
}