// Problem: Minimum Score by Changing Two Elements
// Link to the problem: https://leetcode.com/problems/minimum-score-by-changing-two-elements/
impl Solution {
    pub fn minimize_sum(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut mn1: i32 = 1000000001;
        let mut mn2: i32 = 1000000001;
        let mut mn3: i32 = 1000000001;
        let mut mx1: i32 = 0;
        let mut mx2: i32 = 0;
        let mut mx3: i32 = 0;
        for i in 0..n {
            if (mn1 > nums[i]) {
                mn3 = mn2;
                mn2 = mn1;
                mn1 = nums[i];
            } else if (mn2 > nums[i]) {
                mn3 = mn2;
                mn2 = nums[i];
            } else if (mn3 > nums[i]) {
                mn3 = nums[i];
            }
            if (mx1 < nums[i]) {
                mx3 = mx2;
                mx2 = mx1;
                mx1 = nums[i];
            } else if (mx2 < nums[i]) {
                mx3 = mx2;
                mx2 = nums[i];
            } else if (mx3 < nums[i]) {
                mx3 = nums[i];
            }
        }
        let a: i32 = mx3 - mn1;
        let b: i32 = mx1 - mn3;
        let c: i32 = mx2 - mn2;
        let ans: i32 = a.min(b.min(c));
        return ans;
    }
}
