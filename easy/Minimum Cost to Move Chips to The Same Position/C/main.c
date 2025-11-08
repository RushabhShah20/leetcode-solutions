// Problem: Minimum Cost to Move Chips to The Same Position
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
int minCostToMoveChips(int *position, int positionSize)
{
    int even = 0, odd = 0;
    for (int i = 0; i < positionSize; i++)
    {
        if (position[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    int ans = fmin(even, odd);
    return ans;
}