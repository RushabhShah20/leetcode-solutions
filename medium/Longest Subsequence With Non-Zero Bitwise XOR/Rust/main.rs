// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
impl Solution {
    pub fn longest_subsequence(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut x: i32 = 0;
        let mut y: bool = true;
        for i in 0..n {
            x ^= nums[i];
            if (nums[i] > 0) {
                y = false;
            }
        }
        if (x > 0) {
            return n;
        }
        let ans: i32 = if (y) { 0 } else { n - 1 };
        return ans;
    }
}
