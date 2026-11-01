// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
impl Solution {
    pub fn min_moves(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 0;
        let mut mn: i32 = 1000000001;
        for i in 0..n {
            mn = mn.min(nums[i]);
        }
        for i in 0..n {
            ans += nums[i] - mn;
        }
        return ans;
    }
}
