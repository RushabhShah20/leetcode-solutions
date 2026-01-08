// Problem: Smallest Even Multiple
// Link to the problem: https://leetcode.com/problems/smallest-even-multiple/
impl Solution {
    pub fn smallest_even_multiple(n: i32) -> i32 {
        if (n % 2 == 0) {
            return n;
        } else {
            return 2 * n;
        }
    }
}
