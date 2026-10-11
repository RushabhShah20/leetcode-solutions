// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
impl Solution {
    pub fn sum_of_squares(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 0;
        let mut i: usize = 1;
        while (i * i <= n) {
            if (n % i == 0) {
                ans += nums[i - 1] * nums[i - 1];
                if (i * i != n) {
                    ans += nums[n / i - 1] * nums[n / i - 1];
                }
            }
            i += 1;
        }
        return ans;
    }
}
