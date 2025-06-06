// Problem: Ugly Number
// Link to the problem: https://leetcode.com/problems/ugly-number/
impl Solution {
    pub fn is_ugly(n: i32) -> bool {
        let mut num: i32 = n;
        if (num <= 0) {
            return false;
        } else {
            while (num % 2 == 0) {
                num /= 2;
            }
            while (num % 3 == 0) {
                num /= 3;
            }
            while (num % 5 == 0) {
                num /= 5;
            }
            return num == 1;
        }
    }
}
