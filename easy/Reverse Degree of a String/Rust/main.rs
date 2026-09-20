// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
impl Solution {
    pub fn reverse_degree(s: String) -> i32 {
        let n: usize = s.len();
        let mut ans: i32 = 0;
        let t = s.as_bytes();
        for i in 0..n {
            ans += (26 - ((t[i] - b'a') as i32)) * ((i + 1) as i32);
        }
        return ans;
    }
}
