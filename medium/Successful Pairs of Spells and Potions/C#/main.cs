// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
public class Solution
{
    public int[] SuccessfulPairs(int[] spells, int[] potions, long success)
    {
        int[] ans = new int[spells.Length];
        Array.Sort(potions);
        for (int i = 0; i < spells.Length; i++)
        {
            int x = -1;
            int l = 0, r = potions.Length - 1;
            while (l < r)
            {
                int m = l + (r - l) / 2;
                long y = (long)(potions[m]) * (long)(spells[i]);
                if (y < success)
                {
                    l = m + 1;
                }
                else
                {
                    r = m;
                }
            }
            if ((long)(potions[l]) * (long)(spells[i]) >= success)
            {
                x = l;
            }
            if (x != -1)
            {
                ans[i] += (potions.Length - x);
            }
        }
        return ans;
    }
}