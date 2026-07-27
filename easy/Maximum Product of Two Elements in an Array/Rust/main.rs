// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
impl Solution {
    pub fn max_product(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        for i in 0..n {
            if (nums[i] > x) {
                y = x;
                x = nums[i];
            } else if (nums[i] > y) {
                y = nums[i];
            }
        }
        let ans: i32 = (x - 1) * (y - 1);
        return ans;
    }
}
