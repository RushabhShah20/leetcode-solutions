// Problem: Furthest Point From Origin
// Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
impl Solution {
    pub fn furthest_distance_from_origin(moves: String) -> i32 {
        let n: usize = moves.len();
        let mut left: i32 = 0;
        let mut right: i32 = 0;
        let mut spaces: i32 = 0;
        let moves_bytes = moves.as_bytes();
        for i in 0..n {
            if (moves_bytes[i] == b'L') {
                left += 1;
            } else if (moves_bytes[i] == b'R') {
                right += 1;
            } else {
                spaces += 1;
            }
        }
        let ans: i32 = spaces + (left - right).abs();
        return ans;
    }
}
