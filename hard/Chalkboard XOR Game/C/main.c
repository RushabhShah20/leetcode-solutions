// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
bool xorGame(int *nums, int numsSize)
{
    int total = 0, n = numsSize;
    for (int i = 0; i < numsSize; i++)
    {
        total ^= nums[i];
    }
    const bool a = total == 0, b = n % 2 == 0;
    const bool ans = a || b;
    return ans;
}