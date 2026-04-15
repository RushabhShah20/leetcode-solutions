// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
class Solution {
    public int closestTarget(String[] words, String target, int startIndex) {
        final int n = words.length;
        int ans = n;
        for (int i = 0; i < n; i++) {
            if (words[i].equals(target)) {
                final int x = Math.abs(i - startIndex);
                ans = Math.min(ans, Math.min(x, n - x));
            }
        }
        return ans == n ? -1 : ans;
    }
}