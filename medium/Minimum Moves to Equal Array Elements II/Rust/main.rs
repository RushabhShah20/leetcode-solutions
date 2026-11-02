// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
impl Solution {
    pub fn min_moves2(mut nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 0;
        let mut l: i32 = 0;
        let mut r: i32 = (n - 1) as i32;
        nums.sort();
        while (l <= r) {
            ans += nums[r as usize] - nums[l as usize];
            l += 1;
            r -= 1;
        }
        return ans;
    }
}
