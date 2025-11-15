// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
impl Solution {
    pub fn can_alice_win(nums: Vec<i32>) -> bool {
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        for num in nums {
            if (num / 10 == 0) {
                x += num;
            } else {
                y += num;
            }
        }
        return x != y;
    }
}
