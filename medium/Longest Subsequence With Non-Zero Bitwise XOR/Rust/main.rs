// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
impl Solution {
    pub fn longest_subsequence(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut z: i32 = 0;
        for num in nums.clone().into_iter() {
            z ^= num;
        }
        if (z != 0) {
            return (n as i32);
        }
        let mut x: bool = true;
        for num in nums.clone().into_iter() {
            if (num != 0) {
                x = false;
                break;
            }
        }
        if (x) {
            return 0;
        }
        return (n - 1) as i32;
    }
}
