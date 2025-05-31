// Problem: Sum Multiples
// Link to the problem: https://leetcode.com/problems/sum-multiples/
impl Solution {
    pub fn sum_of_multiples(n: i32) -> i32 {
        let mut sum: i32 = 0;
        for i in 1..=n {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }
        return sum;
    }
}
