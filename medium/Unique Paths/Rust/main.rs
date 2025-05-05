// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
impl Solution {
    pub fn unique_paths(m: i32, n: i32) -> i32 {
        let mut ans: i64 = 1;
        let mut down_moves: i32 = m - 1;
        let mut right_moves: i32 = n - 1;
        let mut x: i32 = std::cmp::max(down_moves, right_moves);
        let mut y: i32 = std::cmp::min(down_moves, right_moves);
        for i in 1..y + 1 {
            ans *= (x + i) as i64;
            ans /= i as i64;
        }
        return ans as i32;
    }
}
