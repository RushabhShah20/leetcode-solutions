// Problem: Minimum Value to Get Positive Step by Step Sum
// Link to the problem: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
impl Solution {
    pub fn min_start_value(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut sum: i32 = 0;
        for num in nums {
            sum += num;
            if (sum <= 0) {
                ans += (1 - sum);
                sum += (1 - sum);
            }
        }
        if (ans == 0) {
            return 1;
        } else {
            return ans;
        }
    }
}
