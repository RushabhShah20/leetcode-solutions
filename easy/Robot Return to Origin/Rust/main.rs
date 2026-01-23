// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
impl Solution {
    pub fn judge_circle(moves: String) -> bool {
        let mut y: i32 = 0;
        let mut x: i32 = 0;
        for mov in moves.bytes() {
            if (mov == b'U') {
                y += 1;
            }
            if (mov == b'D') {
                y -= 1;
            }
            if (mov == b'R') {
                x += 1;
            }
            if (mov == b'L') {
                x -= 1;
            }
        }
        let ans: bool = (x == 0 && y == 0);
        return ans;
    }
}
