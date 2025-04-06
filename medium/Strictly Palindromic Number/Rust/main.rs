// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
impl Solution {
    pub fn nInary(n: i64, b: i64) -> i64 {
        let mut num = n;
        let mut res: i64 = 0;
        let mut mul: i64 = 1;
        while (num > 0) {
            res += (num % b) * mul;
            num /= b;
            mul *= 10;
        }
        res
    }
    pub fn isPalindrome(n: i64) -> bool {
        let mut num = n;
        let mut rev = 0;
        let mut org = n;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        org == rev
    }
    pub fn is_strictly_palindromic(n: i32) -> bool {
        let mut ans = false;
        for i in 2..n - 1 {
            let mut num = Self::nInary(n as i64, i as i64);
            if (Self::isPalindrome(num)) {
                ans = true;
            } else {
                ans = false;
                break;
            }
        }
        ans
    }
}
