// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
impl Solution {
    pub fn count_partitions(nums: Vec<i32>) -> i32 {
        let mut sum: i32 = 0;
        let ans: i32 = (nums.len() - 1) as i32;
        for num in nums {
            sum += num;
        }
        if (sum % 2 == 0) {
            return ans;
        } else {
            return 0;
        }
    }
}
