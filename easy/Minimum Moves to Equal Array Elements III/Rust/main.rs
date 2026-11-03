// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
impl Solution {
    pub fn min_moves(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut mx: i32 = 0;
        for i in 0..n {
            mx = mx.max(nums[i]);
        }
        let mut ans: i32 = 0;
        for i in 0..n {
            ans += mx - nums[i];
        }
        return ans;
    }
}
