// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
impl Solution {
    pub fn sum_counts(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 0;
        for i in 0..n {
            let mut s: std::collections::HashSet<i32> = std::collections::HashSet::new();
            for j in i..n {
                s.insert(nums[j]);
                ans += (s.len() * s.len()) as i32;
            }
        }
        return ans;
    }
}
