// Problem: How Many Numbers Are Smaller Than the Current Number
// Link to the problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
impl Solution {
    pub fn smaller_numbers_than_current(nums: Vec<i32>) -> Vec<i32> {
        let n: usize = nums.len();
        let mut freq: Vec<i32> = vec![0; 101];
        for num in &nums {
            freq[*num as usize] += 1;
        }
        for i in 1..101 {
            freq[i] += freq[i - 1];
        }
        let mut ans: Vec<i32> = vec![0; n];
        for i in 0..n {
            if (nums[i] == 0) {
                ans[i] = 0;
            } else {
                ans[i] = freq[(nums[i] - 1) as usize];
            }
        }
        return ans;
    }
}
