// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
impl Solution {
    pub fn find_closest(x: i32, y: i32, z: i32) -> i32 {
        if (x - z).abs() < (y - z).abs() {
            return 1;
        } else if (x - z).abs() > (y - z).abs() {
            return 2;
        } else {
            return 0;
        }
    }
}
