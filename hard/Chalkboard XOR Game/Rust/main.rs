// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
impl Solution {
    pub fn xor_game(nums: Vec<i32>) -> bool {
        let mut total: i32 = 0;
        let n: usize = nums.len();
        for num in nums {
            total ^= num;
        }
        let a: bool = total == 0;
        let b: bool = n % 2 == 0;
        let ans: bool = a || b;
        return ans;
    }
}
