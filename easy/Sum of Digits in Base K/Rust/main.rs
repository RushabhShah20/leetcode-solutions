// Problem: Sum of Digits in Base K
// Link to the problem: https://leetcode.com/problems/sum-of-digits-in-base-k/
impl Solution {
    pub fn sum_base(mut n: i32, k: i32) -> i32 {
        let mut sum: i32 = 0;
        while (n > 0) {
            sum += n % k;
            n /= k;
        }
        return sum;
    }
}
