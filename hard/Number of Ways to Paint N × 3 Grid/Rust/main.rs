// Problem: Number of Ways to Paint N × 3 Grid
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
impl Solution {
    pub fn num_of_ways(n: i32) -> i32 {
        let MOD: i64 = 1000000007;
        let mut a: i64 = 6;
        let mut b: i64 = 6;
        for i in 1..n {
            let x: i64 = ((3 * a) + (2 * b)) % MOD;
            let y: i64 = ((2 * a) + (2 * b)) % MOD;
            a = x;
            b = y;
        }
        let ans: i32 = ((a + b) % MOD) as i32;
        return ans;
    }
}
