// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
impl Solution {
    pub fn digit_sum(s: String, k: i32) -> String {
        let mut s: String = s;
        let k: usize = k as usize;
        while s.len() > k {
            let mut t: String = String::new();
            let n: usize = s.len();
            let bytes: &[u8] = s.as_bytes();
            for i in (0..n).step_by(k) {
                let mut x: i32 = 0;
                let end: usize = std::cmp::min(i + k, n);
                for j in i..end {
                    x += (bytes[j] - b'0') as i32;
                }
                t.push_str(&x.to_string());
            }
            s = t;
        }
        return s;
    }
}
