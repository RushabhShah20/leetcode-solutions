// Problem: Count Integers With Even Digit Sum
// Link to the problem: https://leetcode.com/problems/count-integers-with-even-digit-sum/
impl Solution {
    pub fn count_even(num: i32) -> i32 {
        let mut count: i32 = 0;
        for i in 1..=num {
            let mut sum: i32 = 0;
            let mut n: i32 = i;
            while (n != 0) {
                sum += n % 10;
                n /= 10;
            }
            if (sum % 2 == 0) {
                count += 1;
            }
        }
        return count;
    }
}
