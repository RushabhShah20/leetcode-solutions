// Problem: Number of Steps to Reduce a Number in Binary Representation to One
// Link to the problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
impl Solution {
    pub fn num_steps(s: String) -> i32 {
        let n: usize = s.len();
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        let s_bytes = s.as_bytes();
        for i in (1..n).rev() {
            let y: i32 = (s_bytes[i] - b'0') as i32 + x;
            if (y % 2 == 0) {
                ans += 1;
            } else {
                ans += 2;
                x = 1;
            }
        }
        ans += x;
        return ans;
    }
}
