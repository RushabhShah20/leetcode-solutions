// Problem: Ant on the Boundary
// Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
impl Solution {
    pub fn return_to_boundary_count(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut count: i32 = 0;
        for i in 0..nums.len() {
            count += nums[i];
            if (count == 0) {
                ans += 1;
            }
        }
        return ans;
    }
}
