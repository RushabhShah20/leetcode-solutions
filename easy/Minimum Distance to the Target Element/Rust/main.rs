// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
impl Solution {
    pub fn get_min_distance(nums: Vec<i32>, target: i32, start: i32) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 1000000000;
        for i in 0..n {
            if (nums[i] == target) {
                ans = ans.min((i as i32 - start).abs());
            }
        }
        return ans;
    }
}
