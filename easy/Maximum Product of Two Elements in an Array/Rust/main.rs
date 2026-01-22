// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
impl Solution {
    pub fn max_product(nums: Vec<i32>) -> i32 {
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        for num in nums {
            if (num > x) {
                y = x;
                x = num;
            } else if (num > y) {
                y = num;
            }
        }
        let ans: i32 = (x - 1) * (y - 1);
        return ans;
    }
}
