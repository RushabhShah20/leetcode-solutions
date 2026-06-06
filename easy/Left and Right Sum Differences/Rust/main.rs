// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
impl Solution {
    pub fn left_right_difference(nums: Vec<i32>) -> Vec<i32> {
        let n: usize = nums.len();
        let mut ans: Vec<i32> = vec![0; n];
        let mut left: Vec<i32> = vec![0; n];
        let mut right: Vec<i32> = vec![0; n];
        let mut sum: i32 = 0;
        for i in 0..n {
            left[i] = sum;
            sum += nums[i];
        }
        sum = 0;
        for i in (0..n).rev() {
            right[i] = sum;
            sum += nums[i];
        }
        for i in 0..n {
            ans[i] = (left[i] - right[i]).abs();
        }
        return ans;
    }
}
