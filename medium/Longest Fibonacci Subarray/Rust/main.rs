// Problem: Longest Fibonacci Subarray
// Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
impl Solution {
    pub fn longest_subarray(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 2;
        let n: usize = nums.len();
        let mut count: i32 = 2;
        for i in 2..n {
            if (nums[i] == nums[i - 1] + nums[i - 2]) {
                count += 1;
            } else {
                ans = ans.max(count);
                count = 2;
            }
        }
        ans = ans.max(count);
        return ans;
    }
}
