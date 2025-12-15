// Problem: Find the Value of the Partition
// Link to the problem: https://leetcode.com/problems/find-the-value-of-the-partition/
impl Solution {
    pub fn find_value_of_partition(mut nums: Vec<i32>) -> i32 {
        nums.sort();
        let mut ans: i32 = 1000000000;
        let n: usize = nums.len();
        for i in 0..n - 1 {
            ans = ans.min(nums[i + 1] - nums[i]);
        }
        return ans;
    }
}
