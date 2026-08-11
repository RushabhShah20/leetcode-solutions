// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
impl Solution {
    pub fn missing_integer(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let s: std::collections::HashSet<&i32> = nums.iter().collect();
        let mut m: usize = 1;
        for i in 1..n {
            if nums[i] == nums[i - 1] + 1 {
                m += 1;
            } else {
                break;
            }
        }
        let mut ans = (nums[m - 1] + nums[0]) * (m as i32) / 2;
        while s.contains(&ans) {
            ans += 1;
        }
        return ans;
    }
}
