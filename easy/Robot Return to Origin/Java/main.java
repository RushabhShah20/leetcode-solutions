// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
class Solution {
    public boolean judgeCircle(String moves) {
        int y = 0;
        int x = 0;
        for (final char move : moves.toCharArray()) {
            if (move == 'U') {
                y++;
            }
            if (move == 'D') {
                y--;
            }
            if (move == 'R') {
                x++;
            }
            if (move == 'L') {
                x--;
            }
        }
        final boolean ans = (x == 0 && y == 0);
        return ans;
    }
}