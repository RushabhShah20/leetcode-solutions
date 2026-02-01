// Problem: Divide an Array Into Subarrays With Minimum Cost I
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
impl Solution {
    pub fn minimum_cost(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut m1: i32 = 51;
        let mut m2: i32 = 51;
        for i in 1..n {
            if (nums[i] < m1) {
                m2 = m1;
                m1 = nums[i];
            } else if (nums[i] < m2) {
                m2 = nums[i];
            }
        }
        let ans: i32 = nums[0] + m1 + m2;
        return ans;
    }
}
