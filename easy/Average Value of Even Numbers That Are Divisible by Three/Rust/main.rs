// Problem: Average Value of Even Numbers That Are Divisible by Three
// Link to the problem: https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
impl Solution {
    pub fn average_value(nums: Vec<i32>) -> i32 {
        let mut sum: i32 = 0;
        let mut s: i32 = 0;
        for i in 0..nums.len() {
            if (nums[i] % 6 == 0) {
                sum = sum + nums[i];
                s += 1;
            }
        }
        if (s == 0) {
            return 0;
        } else {
            return sum / s;
        }
    }
}
