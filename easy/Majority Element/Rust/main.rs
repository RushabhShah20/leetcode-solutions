// Problem: Majority Element
// Link to the problem: https://leetcode.com/problems/majority-element/
impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut element: i32 = -1;
        let mut count: i32 = 0;
        for i in 0..nums.len() {
            if count == 0 {
                element = nums[i];
            }
            count += if (element == nums[i]) { 1 } else { -1 };
        }
        return element;
    }
}
