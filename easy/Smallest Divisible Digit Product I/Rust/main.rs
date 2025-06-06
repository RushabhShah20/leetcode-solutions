// Problem: Smallest Divisible Digit Product I
// Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-i/
impl Solution {
    pub fn getProduct(mut n: i32) -> i32 {
        let mut product: i32 = 1;
        while (n != 0) {
            product = product * (n % 10);
            n = n / 10;
        }
        return product;
    }
    pub fn smallest_number(n: i32, t: i32) -> i32 {
        let mut ans: i32 = n;
        for i in n..=n + (10 - (n % 10)) {
            if (Self::getProduct(i) % t == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
}
