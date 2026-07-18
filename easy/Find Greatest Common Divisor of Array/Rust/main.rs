// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if (b == 0) {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn find_gcd(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut mx: i32 = 0;
        let mut mn: i32 = 1001;
        for i in 0..n {
            mx = mx.max(nums[i]);
            mn = mn.min(nums[i]);
        }
        let ans: i32 = Self::gcd(mx, mn);
        return ans;
    }
}
