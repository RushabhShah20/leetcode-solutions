// Problem: Check if Array is Good
// Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
impl Solution {
    pub fn is_good(mut nums: Vec<i32>) -> bool {
        let n: usize = nums.len();
        if (n == 1) {
            return false;
        }
        nums.sort();
        for i in 0..n - 1 {
            if (nums[i] != ((i as i32) + 1)) {
                return false;
            }
        }
        if (nums[n - 1] != ((n as i32) - 1)) {
            return false;
        }
        return true;
    }
}
