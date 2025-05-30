// Problem: Count Numbers with Unique Digits
// Link to the problem: https://leetcode.com/problems/count-numbers-with-unique-digits/
impl Solution {
    pub fn count_numbers_with_unique_digits(n: i32) -> i32 {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 10;
        }
        let mut total: i32 = 10;
        let mut current: i32 = 9;
        for i in 2..=n {
            current *= (10 - (i - 1));
            total += current;
        }
        return total;
    }
}
