// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
class Solution {
    fun judgeCircle(moves: String): Boolean {
        var x: Int = 0
        var y: Int = 0
        for (move in moves) {
            when (move) {
                'U' -> y++
                'D' -> y--
                'R' -> x++
                'L' -> x--
            }
        }
        return x == 0 && y == 0
    }
}