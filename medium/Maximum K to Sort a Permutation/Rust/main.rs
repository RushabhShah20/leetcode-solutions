// Problem: Maximum K to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
impl Solution {
    pub fn sort_permutation(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = -1;
        for i in 0..n {
            if (nums[i] != i as i32) {
                ans &= nums[i];
            }
        }
        if (ans == -1) {
            return 0;
        } else {
            return ans;
        }
    }
}
