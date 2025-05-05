// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
impl Solution {
    pub fn split(n: i32) -> Vec<i32> {
        let mut num: i32 = n;
        let mut res: Vec<i32> = Vec::new();
        while (num > 0) {
            res.push(num % 10);
            num /= 10;
        }
        return res;
    }
    pub fn alternate_digit_sum(n: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut digits: Vec<i32> = Self::split(n);
        for i in (0..digits.len()).rev() {
            if digits.len() % 2 == 0 {
                if i % 2 != 0 {
                    ans += digits[i];
                } else {
                    ans -= digits[i];
                }
            } else {
                if i % 2 == 0 {
                    ans += digits[i];
                } else {
                    ans -= digits[i];
                }
            }
        }
        return ans;
    }
}
