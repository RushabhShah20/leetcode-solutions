// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
impl Solution {
    pub fn find_complement(num: i32) -> i32 {
        if (num == 0) {
            return 1;
        }
        let mut x: i32 = 1;
        while (x < num) {
            x = (x << 1) | 1;
        }
        let ans: i32 = num ^ x;
        return ans;
    }
}
