// Problem: Assign Cookies
// Link to the problem: https://leetcode.com/problems/assign-cookies/
class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int i = 0, j = 0, ans = 0, n = g.length, m = s.length;
        while (j < m && i < n) {
            if (g[i] <= s[j]) {
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
}
