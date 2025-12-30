// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
impl Solution {
    pub fn minimum_deletions(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut x: usize = 0;
        let mut y: usize = 0;
        for i in 0..n {
            if (nums[i] > nums[x]) {
                x = i;
            } else if (nums[i] < nums[y]) {
                y = i;
            }
        }
        let a: usize = x.max(y) + 1;
        let b: usize = n - x.min(y);
        let c: usize = (x.min(y) + 1) + (n - x.max(y));
        let ans: usize = a.min(b.min(c));
        return ans as i32;
    }
}
