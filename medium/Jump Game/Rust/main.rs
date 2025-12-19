// Problem: Jump Game
// Link to the problem: https://leetcode.com/problems/jump-game/
impl Solution {
    pub fn can_jump(nums: Vec<i32>) -> bool {
        let n: usize = nums.len();
        let mut x: i32 = 0;
        for i in 0..n {
            if (i as i32 > x) {
                return false;
            }
            x = x.max((i as i32) + nums[i]);
        }
        return true;
    }
}
