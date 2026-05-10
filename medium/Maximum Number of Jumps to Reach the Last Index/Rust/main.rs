// Problem: Maximum Number of Jumps to Reach the Last Index
// Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
impl Solution {
    pub fn maximum_jumps(nums: Vec<i32>, target: i32) -> i32 {
        let n: usize = nums.len();
        let mut dp: Vec<i32> = vec![-1; n];
        dp[0] = 0;
        for i in 1..n {
            for j in 0..i {
                if ((nums[i] - nums[j]).abs() <= target && dp[j] != -1) {
                    dp[i] = dp[i].max(dp[j] + 1);
                }
            }
        }
        let ans: i32 = dp[n - 1];
        return ans;
    }
}
