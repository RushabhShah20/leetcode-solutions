// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
impl Solution {
    pub fn sumOfDigits(num: i32) -> i32 {
        let mut sum = 0;
        let mut n = num;
        while n > 0 {
            sum += n % 10;
            n /= 10;
        }
        sum
    }

    pub fn min_element(nums: Vec<i32>) -> i32 {
        let mut nums = nums;
        for i in 0..nums.len() {
            let mut n = nums[i];
            n = Self::sumOfDigits(n);
            nums[i] = n;
        }
        let mut min = nums[0];
        for i in 1..nums.len() {
            if nums[i] < min {
                min = nums[i];
            }
        }
        min
    }
}
