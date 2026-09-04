// Problem: Smallest Stable Index I
// Link to the problem: https://leetcode.com/problems/smallest-stable-index-i/
impl Solution {
    pub fn first_stable_index(nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        let mut mn: Vec<i32> = vec![0; n];
        let mut mx: Vec<i32> = vec![0; n];
        mx[0] = nums[0];
        for i in 1..n {
            mx[i] = mx[i - 1].max(nums[i]);
        }
        mn[n - 1] = nums[n - 1];
        for i in (0..n - 1).rev() {
            mn[i] = mn[i + 1].min(nums[i]);
        }
        for i in 0..n {
            if (mx[i] - mn[i] <= k) {
                return i as i32;
            }
        }
        return -1;
    }
}
