// Problem: Maximum Product of Three Numbers
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-numbers/
impl Solution {
    pub fn maximum_product(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut a: i32 = -1001;
        let mut b: i32 = -1001;
        let mut c: i32 = -1001;
        let mut x: i32 = 1001;
        let mut y: i32 = 1001;
        for i in 0..n {
            if (nums[i] < x) {
                y = x;
                x = nums[i];
            } else if (nums[i] < y) {
                y = nums[i];
            }
            if (nums[i] > a) {
                c = b;
                b = a;
                a = nums[i];
            } else if (nums[i] > b) {
                c = b;
                b = nums[i];
            } else if (nums[i] > c) {
                c = nums[i];
            }
        }
        let ans: i32 = (a * b * c).max(a * x * y);
        return ans;
    }
}
