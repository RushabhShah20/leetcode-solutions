// Problem: Adjacent Increasing Subarrays Detection II
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/
impl Solution {
    pub fn max_increasing_subarrays(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut prevK: i32 = 1;
        let mut k: i32 = 1;
        let mut res: i32 = 1;
        for i in 0..n - 1 {
            if (nums[i + 1] > nums[i]) {
                k += 1;
            } else {
                prevK = k;
                k = 1;
            }
            res = res.max(prevK.min(k));
            res = res.max(k / 2);
        }
        return res;
    }
}
