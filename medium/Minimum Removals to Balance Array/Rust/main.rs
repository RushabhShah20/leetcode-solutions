// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
impl Solution {
    pub fn min_removal(mut nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        let mut i: usize = 0;
        let mut ans: i32 = 0;
        nums.sort();
        for j in 0..n {
            while ((nums[j] as i64) > (nums[i] as i64) * (k as i64)) {
                i += 1;
            }
            ans = ans.max((j - i + 1) as i32);
        }
        ans = (n as i32) - ans;
        return ans;
    }
}
