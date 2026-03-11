// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
impl Solution {
    pub fn bitwise_complement(n: i32) -> i32 {
        if (n == 0) {
            return 1;
        }
        let mut x: i32 = 1;
        while (x < n) {
            x = (x << 1) | 1;
        }
        let ans: i32 = n ^ x;
        return ans;
    }
}
