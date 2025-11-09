// Problem: Count Subarrays With Majority Element I
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-i/
impl Solution {
    pub fn count_majority_subarrays(nums: Vec<i32>, target: i32) -> i32 {
        let mut ans: i32 = 0;
        let n: usize = nums.len();
        for k in 1..=n {
            let mut count: i32 = 0;
            for i in 0..n {
                if (i >= k) {
                    if (nums[i] == target) {
                        count += 1;
                    }
                    if (nums[i - k] == target) {
                        count -= 1;
                    }
                } else {
                    if (nums[i] == target) {
                        count += 1;
                    }
                }
                if (i >= k - 1) {
                    if (2 * count > (k as i32)) {
                        ans += 1;
                    }
                }
            }
        }
        return ans;
    }
}
