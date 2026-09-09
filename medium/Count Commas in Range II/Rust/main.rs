// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
impl Solution {
    pub fn count_commas(mut n: i64) -> i64 {
        let mut ans: i64 = 0;
        let mut x: i64 = 1000;
        while (x <= n) {
            ans += (n - x + 1);
            x *= 1000;
        }
        return ans;
    }
}
