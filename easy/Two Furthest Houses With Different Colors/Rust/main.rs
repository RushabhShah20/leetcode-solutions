// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
impl Solution {
    pub fn max_distance(colors: Vec<i32>) -> i32 {
        let n: usize = colors.len();
        let mut ans: i32 = 0;
        for i in 0..n {
            for j in i + 1..n {
                if (colors[i] != colors[j]) {
                    ans = ans.max((i as i32 - j as i32).abs());
                }
            }
        }
        return ans;
    }
}
