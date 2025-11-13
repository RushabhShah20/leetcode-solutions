// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
class Solution {
    public boolean escapeGhosts(int[][] ghosts, int[] target) {
        int x = (Math.abs(target[0])) + (Math.abs(target[1]));
        for (int[] ghost : ghosts) {
            int y = (Math.abs(ghost[0] - target[0])) + (Math.abs(ghost[1] - target[1]));
            if (y <= x) {
                return false;
            }
        }
        return true;
    }
}