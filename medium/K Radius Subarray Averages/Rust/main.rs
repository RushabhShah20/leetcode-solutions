// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
impl Solution {
    pub fn get_averages(nums: Vec<i32>, k: i32) -> Vec<i32> {
        let n: usize = nums.len();
        let m: i32 = (2 * k) + 1;
        let mut ans: Vec<i32> = vec![-1; n];
        let mut sum: i64 = 0;
        for i in 0..n {
            if (i >= (m as usize)) {
                sum += (nums[i] as i64);
                sum -= (nums[i - (m as usize)] as i64);
            } else {
                sum += (nums[i] as i64);
            }
            if (i >= ((m - 1) as usize)) {
                ans[i - (k as usize)] = (sum / (m as i64)) as i32;
            }
        }
        return ans;
    }
}
