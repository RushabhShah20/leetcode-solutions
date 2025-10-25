// Problem: Assign Cookies
// Link to the problem: https://leetcode.com/problems/assign-cookies/
impl Solution {
    pub fn find_content_children(mut g: Vec<i32>, mut s: Vec<i32>) -> i32 {
        g.sort();
        s.sort();
        let mut i: usize = 0;
        let mut j: usize = 0;
        let mut ans: i32 = 0;
        let n: usize = g.len();
        let m: usize = s.len();
        while (j < m && i < n) {
            if (g[i] <= s[j]) {
                ans += 1;
                i += 1;
            }
            j += 1;
        }
        return ans;
    }
}
