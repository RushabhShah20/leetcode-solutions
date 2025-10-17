// Problem: Array Partition
// Link to the problem: https://leetcode.com/problems/array-partition/
impl Solution {
    pub fn array_pair_sum(mut nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        nums.sort();
        for i in (0..nums.len()).step_by(2) {
            ans += nums[i];
        }
        return ans;
    }
}
