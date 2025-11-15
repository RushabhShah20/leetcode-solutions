// Problem: Find Numbers with Even Number of Digits
// Link to the problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
impl Solution {
    pub fn find_numbers(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..nums.len() {
            let mut n: i32 = nums[i];
            let mut count: i32 = 0;
            while (n != 0) {
                count += 1;
                n /= 10;
            }
            if (count % 2 == 0) {
                ans += 1;
            }
        }
        return ans;
    }
}
