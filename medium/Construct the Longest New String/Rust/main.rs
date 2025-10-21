// Problem: Construct the Longest New String
// Link to the problem: https://leetcode.com/problems/construct-the-longest-new-string/
impl Solution {
    pub fn longest_string(x: i32, y: i32, z: i32) -> i32 {
        if (x > y) {
            return ((2 * ((y) + (y + 1))) + (2 * z));
        } else if (x < y) {
            return ((2 * ((x) + (x + 1))) + (2 * z));
        } else {
            return ((2 * (x + y)) + (2 * z));
        }
    }
}
