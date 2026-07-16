// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        return if b == 0 { a } else { Self::gcd(b, a % b) };
    }
    pub fn gcd_sum(nums: Vec<i32>) -> i64 {
        let n: usize = nums.len();
        let mut mx: i32 = 0;
        let mut a: Vec<i32> = vec![0; n];
        for i in 0..n {
            mx = mx.max(nums[i]);
            a[i] = Self::gcd(mx, nums[i]);
        }
        let mut ans: i64 = 0;
        a.sort();
        let mut l: usize = 0;
        let mut r: usize = n - 1;
        while (l < r) {
            ans += Self::gcd(a[l], a[r]) as i64;
            l += 1;
            r -= 1;
        }
        return ans;
    }
}
