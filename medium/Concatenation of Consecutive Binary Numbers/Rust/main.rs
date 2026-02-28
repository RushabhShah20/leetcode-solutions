// Problem: Concatenation of Consecutive Binary Numbers
// Link to the problem: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
impl Solution {
    pub fn concatenated_binary(n: i32) -> i32 {
        let MOD: i64 = 1000000007;
        let mut ans: i64 = 0;
        for i in 1..=n {
            let mut x: i32 = i;
            while (x > 0) {
                x /= 2;
                ans *= 2;
            }
            ans = (ans + i as i64) % MOD;
        }
        return ans as i32;
    }
}
