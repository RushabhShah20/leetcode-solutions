// Problem: Find the Minimum Amount of Time to Brew Potions
// Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
class Solution {
    public long minTime(int[] skill, int[] mana) {
        int n = skill.length, m = mana.length;
        long[] ans = new long[n + 1];
        Arrays.fill(ans, 0);
        for (int j = 0; j < m; ++j) {
            for (int i = 0; i < n; ++i) {
                ans[i + 1] = Math.max(ans[i + 1], ans[i]) + ((long) (mana[j]) * (long) (skill[i]));
            }
            for (int i = n - 1; i > 0; i--) {
                ans[i] = ans[i + 1] - ((long) (mana[j]) * (long) (skill[i]));
            }
        }
        return ans[n];
    }
}