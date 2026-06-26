// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
impl Solution {
    pub fn count_majority_subarrays(nums: Vec<i32>, target: i32) -> i64 {
        let n: usize = nums.len();
        let mut pre: Vec<i32> = vec![0; 2 * n + 1];
        pre[n] = 1;
        let mut x: usize = n;
        let mut ans: i64 = 0;
        let mut y: i64 = 0;
        for i in 0..n {
            if (nums[i] == target) {
                y += pre[x] as i64;
                x += 1;
                pre[x] += 1;
            } else {
                x -= 1;
                y -= pre[x] as i64;
                pre[x] += 1;
            }
            ans += y;
        }
        return ans;
    }
}
