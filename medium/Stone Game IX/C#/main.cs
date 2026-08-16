// Problem: Stone Game IX
// Link to the problem: https://leetcode.com/problems/stone-game-ix/
public class Solution
{
    public bool StoneGameIX(int[] stones)
    {
        int n = stones.Length, a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            int x = stones[i] % 3;
            if (x == 1)
            {
                b++;
            }
            else if (x == 2)
            {
                c++;
            }
            else
            {
                a++;
            }
        }
        bool ans = (a & 1) == 1 ? Math.Abs(b - c) > 2 : b >= 1 && c >= 1;
        return ans;
    }
}