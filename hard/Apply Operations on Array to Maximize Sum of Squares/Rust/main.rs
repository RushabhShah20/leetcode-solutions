// Problem: Apply Operations on Array to Maximize Sum of Squares
// Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
impl Solution {
    pub fn max_sum(nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        let m: i64 = 1000000007;
        let mut a: Vec<i32> = vec![0; 30];
        for i in 0..n {
            for j in 0..30 {
                a[j] += nums[i] >> j & 1;
            }
        }
        let mut ans: i64 = 0;
        for i in 0..k {
            let mut x: i64 = 0;
            for j in (0..30).rev() {
                if (a[j] > 0) {
                    x |= 1 << j;
                    a[j] -= 1;
                }
            }
            ans = (ans + x * x) % m;
        }
        return ans as i32;
    }
}
