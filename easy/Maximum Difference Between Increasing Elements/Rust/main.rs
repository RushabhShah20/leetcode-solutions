// Problem: Maximum Difference Between Increasing Elements
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
impl Solution {
    pub fn maximum_difference(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut res: i32 = 0;
        let mut pre: Vec<i32> = vec![0; n];
        let mut suff: Vec<i32> = vec![0; n];
        pre[0] = nums[0];
        suff[n - 1] = nums[n - 1];
        for i in 1..n {
            pre[i] = pre[i - 1].min(nums[i]);
        }
        for i in (0..n - 1).rev() {
            suff[i] = suff[i + 1].max(nums[i]);
        }
        for i in 0..n {
            res = res.max(suff[i] - pre[i]);
        }
        if (res == 0) {
            return -1;
        }
        return res;
    }
}
