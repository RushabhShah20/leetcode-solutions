// Problem: Rotate Function
// Link to the problem: https://leetcode.com/problems/rotate-function/
impl Solution {
    pub fn max_rotate_function(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        for i in 0..n {
            x += nums[i];
            y += i as i32 * nums[i];
        }
        let mut ans: i32 = y;
        for i in (0..n).rev() {
            y = y + x - n as i32 * nums[i];
            ans = ans.max(y);
        }
        return ans;
    }
}
