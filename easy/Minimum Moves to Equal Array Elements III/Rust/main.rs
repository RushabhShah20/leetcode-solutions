// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
impl Solution {
    pub fn min_moves(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let x: i32 = *nums.iter().max().unwrap();
        for num in nums {
            ans += (x - num);
        }
        return ans;
    }
}
