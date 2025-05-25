// Problem: Single Element in a Sorted Array
// Link to the problem: https://leetcode.com/problems/single-element-in-a-sorted-array/
impl Solution {
    pub fn single_non_duplicate(nums: Vec<i32>) -> i32 {
        let mut ans = 0;
        let mut m: std::collections::HashMap<i32, i32> = std::collections::HashMap::new();
        for i in 0..nums.len() {
            *m.entry(nums[i]).or_insert(0) += 1;
        }
        for (key, value) in &m {
            if *value == 1 {
                ans = *key;
            }
        }
        return ans;
    }
}
