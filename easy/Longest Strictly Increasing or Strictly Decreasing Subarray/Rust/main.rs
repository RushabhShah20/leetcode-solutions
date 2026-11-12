// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
impl Solution {
    pub fn longest_monotonic_subarray(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut a: i32 = 1;
        let mut b: i32 = 1;
        let mut c: i32 = 1;
        let mut d: i32 = 1;
        for i in 1..n {
            if (nums[i] > nums[i - 1]) {
                c += 1;
                a = a.max(c);
                d = 1;
            } else if (nums[i] < nums[i - 1]) {
                d += 1;
                b = b.max(d);
                c = 1;
            } else {
                c = 1;
                d = 1;
            }
        }
        let ans: i32 = a.max(b);
        return ans;
    }
}
