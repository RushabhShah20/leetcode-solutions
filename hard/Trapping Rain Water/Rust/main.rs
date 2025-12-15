// Problem: Trapping Rain Water
// Link to the problem: https://leetcode.com/problems/trapping-rain-water/
impl Solution {
    pub fn trap(height: Vec<i32>) -> i32 {
        let mut i: usize = 0;
        let mut left_max: i32 = height[0];
        let mut ans: i32 = 0;
        let mut j: usize = height.len() - 1;
        let mut right_max: i32 = height[j];
        while (i < j) {
            if (left_max <= right_max) {
                ans += (left_max - height[i]);
                i += 1;
                left_max = left_max.max(height[i]);
            } else {
                ans += (right_max - height[j]);
                j -= 1;
                right_max = right_max.max(height[j]);
            }
        }
        return ans;
    }
}
