// Problem: Find N Unique Integers Sum up to Zero
// Link to the problem: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
impl Solution {
    pub fn sum_zero(n: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![0; n as usize];
        for i in 0..ans.len() {
            ans[i] = 2 * (i as i32) - n + 1;
        }
        return ans;
    }
}
