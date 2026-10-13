// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
impl Solution {
    pub fn max_alternating_sum(mut nums: Vec<i32>) -> i64 {
        let n: usize = nums.len();
        let mut ans: i64 = 0;
        for i in 0..n {
            nums[i] *= nums[i];
        }
        nums.sort();
        for i in 0..n {
            if (i < (n >> 1)) {
                ans -= nums[i] as i64;
            } else {
                ans += nums[i] as i64;
            }
        }
        return ans;
    }
}
