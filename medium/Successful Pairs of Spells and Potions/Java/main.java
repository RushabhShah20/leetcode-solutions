// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        int[] ans = new int[spells.length];
        Arrays.fill(ans, 0);
        Arrays.sort(potions);
        for (int i = 0; i < spells.length; i++) {
            int x = -1;
            int l = 0, r = potions.length - 1;
            while (l < r) {
                int m = l + (r - l) / 2;
                long y = (long) (potions[m]) * (long) (spells[i]);
                if (y < success) {
                    l = m + 1;
                } else {
                    r = m;
                }
            }
            if ((long) (potions[l]) * (long) (spells[i]) >= success) {
                x = l;
            }
            if (x != -1) {
                ans[i] += (potions.length - x);
            }
        }
        return ans;
    }
}