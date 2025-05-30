// Problem: Find the Sum of Encrypted Integers
// Link to the problem: https://leetcode.com/problems/find-the-sum-of-encrypted-integers/
impl Solution {
    pub fn maxDigitOfNum(mut num: i32) -> i32 {
        let mut maxDigit: i32 = 0;
        while (num > 0) {
            maxDigit = std::cmp::max(maxDigit, num % 10);
            num /= 10;
        }
        return maxDigit;
    }
    pub fn numofDigits(mut num: i32) -> i32 {
        let mut count: i32 = 0;
        while (num > 0) {
            count += 1;
            num /= 10;
        }
        return count;
    }
    pub fn encrypt(mut num: i32) -> i32 {
        let mut maxDigit: i32 = Self::maxDigitOfNum(num);
        let mut numDigits: i32 = Self::numofDigits(num);
        let mut ans: i32 = 0;
        for i in 1..=numDigits {
            ans += maxDigit * 10_i32.pow((i - 1) as u32);
        }
        return ans;
    }
    pub fn sum_of_encrypted_int(mut nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..nums.len() {
            nums[i] = Self::encrypt(nums[i]);
            ans += nums[i];
        }
        return ans;
    }
}
