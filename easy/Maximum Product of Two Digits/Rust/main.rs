// Problem: Maximum Produdct of Two Digits
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
impl Solution {
    pub fn max_product(mut n: i32) -> i32 {
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        while (n > 0) {
            let k: i32 = n % 10;
            if (k > x) {
                y = x;
                x = k;
            } else if (k > y) {
                y = k;
            }
            n /= 10;
        }
        let ans: i32 = x * y;
        return ans;
    }
}
