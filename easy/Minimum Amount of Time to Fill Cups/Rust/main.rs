// Problem: Minimum Amount of Time to Fill Cups
// Link to the problem: https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups/
impl Solution {
    pub fn smallest(a: i32, b: i32, c: i32) -> i32 {
        if (a < b) {
            if (a < c) {
                return a;
            } else {
                return c;
            }
        } else {
            if (b < c) {
                return b;
            } else {
                return c;
            }
        }
    }
    pub fn fill_cups(amount: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut a: i32 = amount[0];
        let mut b: i32 = amount[1];
        let mut c: i32 = amount[2];
        while (a > 0 || b > 0 || c > 0) {
            if (Self::smallest(a, b, c) == a) {
                b -= 1;
                c -= 1;
            } else if (Self::smallest(a, b, c) == b) {
                a -= 1;
                c -= 1;
            } else {
                a -= 1;
                b -= 1;
            }
            ans += 1;
        }
        return ans;
    }
}
