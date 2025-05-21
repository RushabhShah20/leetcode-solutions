// Problem: Find Three Consecutive Integers That Sum to a Given Number
// Link to the problem: https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/
impl Solution {
    pub fn sum_of_three(num: i64) -> Vec<i64> {
        if num % 3 == 0 {
            return vec![((num / 3) - 1), num / 3, ((num / 3) + 1)];
        } else {
            return vec![];
        }
    }
}
