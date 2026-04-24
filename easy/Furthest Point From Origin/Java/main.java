// Problem: Furthest Point From Origin
// Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        final int n = moves.length();
        int left = 0, right = 0, spaces = 0;
        for (int i = 0; i < n; i++) {
            if (moves.charAt(i) == 'L') {
                left++;
            } else if (moves.charAt(i) == 'R') {
                right++;
            } else {
                spaces++;
            }
        }
        final int ans = spaces + Math.abs(left - right);
        return ans;
    }
}