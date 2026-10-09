// Problem: Minimum Insertions to Balance a Parentheses String
// Link to the problem: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
impl Solution {
    pub fn min_insertions(s: String) -> i32 {
        let n: usize = s.len();
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        let t = s.as_bytes();
        for i in 0..n {
            if (t[i] == b'(') {
                if ((x & 1) == 1) {
                    ans += 1;
                    x += 1;
                } else {
                    x += 2;
                }
            } else if (x == 0) {
                ans += 1;
                x = 1;
            } else {
                x -= 1;
            }
        }
        ans += x;
        return ans;
    }
}
