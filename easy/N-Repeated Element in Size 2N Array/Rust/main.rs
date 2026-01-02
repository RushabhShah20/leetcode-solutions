// Problem: N-Repeated Element in Size 2N Array
// Link to the problem: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
impl Solution {
    pub fn repeated_n_times(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        for i in 0..n - 2 {
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2]) {
                return nums[i];
            }
        }
        return nums[n - 1];
    }
}
