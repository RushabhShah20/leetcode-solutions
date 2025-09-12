// Problem: Count Number of Homogenous Substrings
// Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/
impl Solution {
    pub fn count_homogenous(s: String) -> i32 {
        let mut MOD: i64 = 1000000007;
        let mut count: i32 = 1;
        let mut a: Vec<i32> = Vec::new();
        let chars: Vec<char> = s.chars().collect();
        for i in 1..chars.len() {
            if (chars[i] == chars[i - 1]) {
                count += 1;
            } else {
                a.push(count);
                count = 1;
            }
        }
        a.push(count);
        let mut ans: i64 = 0;
        for i in 0..a.len() {
            ans += ((((a[i] as i64) * ((a[i] + 1) as i64)) / 2) % (MOD));
        }
        return ((ans % MOD) as i32);
    }
}
