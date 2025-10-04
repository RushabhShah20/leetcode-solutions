// Problem: Container With Most Water
// Link to the problem: https://leetcode.com/problems/container-with-most-water/
impl Solution {
    pub fn max_area(height: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let n: usize = height.len();
        let mut left: usize = 0;
        let mut right: usize = n - 1;
        while (left <= right) {
            let vol: i32 = ((right as i32) - (left as i32)) * height[left].min(height[right]);
            ans = ans.max(vol);
            if (height[left] <= height[right]) {
                left += 1;
            } else {
                right -= 1;
            }
        }
        return ans;
    }
}
