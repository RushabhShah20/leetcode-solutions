// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
impl Solution {
    pub fn min_pair_sum(mut nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        nums.sort();
        let mut l: usize = 0;
        let mut r: usize = n - 1;
        let mut ans: i32 = 0;
        while (l < r) {
            ans = ans.max(nums[l] + nums[r]);
            l += 1;
            r -= 1;
        }
        return ans;
    }
}
