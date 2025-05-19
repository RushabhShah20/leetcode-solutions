// Problem: Check If It Is a Straight Line
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-straight-line/
impl Solution {
    pub fn check_straight_line(coordinates: Vec<Vec<i32>>) -> bool {
        let mut x: bool = true;
        for i in 1..coordinates.len() - 1 {
            let mut x1: i32 = coordinates[i - 1][0];
            let mut x2: i32 = coordinates[i][0];
            let mut x3: i32 = coordinates[i + 1][0];
            let mut y1: i32 = coordinates[i - 1][1];
            let mut y2: i32 = coordinates[i][1];
            let mut y3: i32 = coordinates[i + 1][1];
            if ((y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1)) {
                x = false;
                break;
            }
        }
        return x;
    }
}
