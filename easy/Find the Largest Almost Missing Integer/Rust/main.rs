// Problem: Find the Largest Almost Missing Integer
// Link to the problem: https://leetcode.com/problems/find-the-largest-almost-missing-integer/
impl Solution {
    pub fn largest_integer(nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = -1;
        if (n == k as usize) {
            for i in 0..n {
                ans = ans.max(nums[i]);
            }
            return ans;
        }
        let mut a: Vec<i32> = vec![0; 51];
        for i in 0..n {
            a[nums[i] as usize] += 1;
        }
        if (k == 1) {
            for i in (0..=50).rev() {
                if (a[i] == 1) {
                    return i as i32;
                }
            }
            return -1;
        }
        if (a[nums[0] as usize] == 1) {
            ans = ans.max(nums[0]);
        }
        if (a[nums[n - 1] as usize] == 1) {
            ans = ans.max(nums[n - 1]);
        }
        return ans;
    }
}
