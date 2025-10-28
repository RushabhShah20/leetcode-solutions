// Problem: Make Array Elements Equal to Zero
// Link to the problem: https://leetcode.com/problems/make-array-elements-equal-to-zero/
impl Solution {
    pub fn count_valid_selections(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 0;
        let mut sum: i32 = 0;
        for num in &nums {
            sum += *num;
        }
        let mut leftSum: i32 = 0;
        let mut rightSum: i32 = sum;
        for i in 0..n {
            if (nums[i] == 0) {
                if (leftSum - rightSum >= 0 && leftSum - rightSum <= 1) {
                    ans += 1;
                }
                if (rightSum - leftSum >= 0 && rightSum - leftSum <= 1) {
                    ans += 1;
                }
            } else {
                leftSum += nums[i];
                rightSum -= nums[i];
            }
        }
        return ans;
    }
}
