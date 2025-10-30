// Problem: Minimum Number of Increments on Subarrays to Form a Target Array
// Link to the problem: https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/
impl Solution {
    pub fn min_number_operations(target: Vec<i32>) -> i32 {
        let n: usize = target.len();
        let mut ans: i32 = target[0];
        for i in 1..n {
            if (target[i] > target[i - 1]) {
                ans += (target[i] - target[i - 1]);
            }
        }
        return ans;
    }
}
