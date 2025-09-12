// Problem: Sort Colors
// Link to the problem: https://leetcode.com/problems/sort-colors/
impl Solution {
    pub fn sort_colors(nums: &mut Vec<i32>) {
        let mut zeroes: i32 = 0;
        let mut ones: i32 = 0;
        let mut twos: i32 = 0;
        for i in 0..nums.len() {
            if (nums[i] == 0) {
                zeroes += 1;
            } else if (nums[i] == 1) {
                ones += 1;
            } else {
                twos += 1;
            }
        }
        for i in 0..nums.len() {
            if (zeroes > 0) {
                nums[i] = 0;
                zeroes -= 1;
            } else if (ones > 0) {
                nums[i] = 1;
                ones -= 1;
            } else {
                nums[i] = 2;
                twos -= 1;
            }
        }
    }
}
