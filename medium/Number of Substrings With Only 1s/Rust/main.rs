// Problem: Number of Substrings With Only 1s
// Link to the problem: https://leetcode.com/problems/number-of-substrings-with-only-1s/
impl Solution {
    pub fn num_sub(s: String) -> i32 {
        let mut x: Vec<i32> = Vec::new();
        let mut y: i32 = 0;
        let s_bytes = s.as_bytes();
        for i in 0..s_bytes.len() {
            if (s_bytes[i] == b'1') {
                y += 1;
            } else {
                x.push(y);
                y = 0;
            }
        }
        if (y != 0) {
            x.push(y);
        }
        let mut ans: i32 = 0;
        let MOD: i64 = 1000000007;
        for i in 0..x.len() {
            ans += (((((x[i] as i64) * (x[i] as i64 + 1)) / 2) % MOD) as i32);
        }
        return ans;
    }
}
