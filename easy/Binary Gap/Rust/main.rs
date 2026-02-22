// Problem: Binary Gap
// Link to the problem: https://leetcode.com/problems/binary-gap/
impl Solution {
    pub fn binary_gap(mut n: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        let mut y: i32 = -1;
        while (n > 0) {
            if (n % 2 == 1) {
                if (y != -1) {
                    ans = ans.max(x - y);
                }
                y = x;
            }
            n /= 2;
            x += 1;
        }
        return ans;
    }
}
