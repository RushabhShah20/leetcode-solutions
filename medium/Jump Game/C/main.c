// Problem: Jump Game
// Link to the problem: https://leetcode.com/problems/jump-game/
bool canJump(int *nums, int numsSize)
{
    int x = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (i > x)
        {
            return false;
        }
        x = fmax(x, i + nums[i]);
    }
    return true;
}