// Problem: Minimum Difference Between Highest and Lowest of K Scores
// Link to the problem: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
impl Solution {
    pub fn minimum_difference(mut nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        nums.sort();
        let mut ans: i32 = 100001;
        for i in 0..n - (k as usize) + 1 {
            ans = ans.min(nums[i + (k as usize) - 1] - nums[i]);
        }
        return ans;
    }
}
