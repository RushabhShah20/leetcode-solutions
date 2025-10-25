// Problem: Construct the Minimum Bitwise Array I
// Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/
impl Solution {
    pub fn min_bitwise_array(nums: Vec<i32>) -> Vec<i32> {
        let n: usize = nums.len();
        let mut ans: Vec<i32> = vec![0; n];
        for i in 0..n {
            if (nums[i] % 2 == 0) {
                ans[i] = -1;
            } else {
                ans[i] = nums[i] - (((nums[i] + 1) & (-nums[i] - 1)) / 2);
            }
        }
        return ans;
    }
}
