// Problem: Valid Boomerang
// Link to the problem: https://leetcode.com/problems/valid-boomerang/
impl Solution {
    pub fn is_boomerang(points: Vec<Vec<i32>>) -> bool {
        let x1: i32 = points[0][0];
        let x2: i32 = points[1][0];
        let x3: i32 = points[2][0];
        let y1: i32 = points[0][1];
        let y2: i32 = points[1][1];
        let y3: i32 = points[2][1];
        if ((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1)) {
            return false;
        } else {
            if ((y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1)) {
                return true;
            } else {
                return false;
            }
        }
    }
}
