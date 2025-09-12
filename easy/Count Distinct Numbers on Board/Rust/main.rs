// Problem: Count Distinct Numbers on Board
// Link to the problem: https://leetcode.com/problems/count-distinct-numbers-on-board/
impl Solution {
    pub fn distinct_integers(n: i32) -> i32 {
        if n == 1 {
            return 1;
        } else {
            return n - 1;
        }
    }
}
