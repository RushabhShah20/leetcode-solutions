// Problem: Minimum Operations to Make Array Sum Divisible by K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
impl Solution {
    pub fn min_operations(nums: Vec<i32>, k: i32) -> i32 {
        let mut sum: i32 = 0;
        for num in nums {
            sum += num;
        }
        let ans: i32 = sum % k;
        return ans;
    }
}
