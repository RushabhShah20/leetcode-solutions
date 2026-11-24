// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if (b == 0) {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn max_length(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 2;
        let mut x: i32 = 1;
        let mut i: i32 = 0;
        for j in 0..n {
            while (Self::gcd(x, nums[j]) > 1) {
                x /= nums[i as usize];
                i += 1;
            }
            x *= nums[j];
            ans = ans.max((j as i32) - i + 1);
        }
        return ans;
    }
}
