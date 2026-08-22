// Problem: Check Divisibility by Digit Sum and Product
// Link to the problem: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
impl Solution {
    pub fn check_divisibility(n: i32) -> bool {
        let mut x: i32 = 0;
        let mut y: i32 = 1;
        let mut m: i32 = n;
        while (m > 0) {
            let z: i32 = m % 10;
            x += z;
            y *= z;
            m /= 10;
        }
        let ans: bool = n % (x + y) == 0;
        return ans;
    }
}
