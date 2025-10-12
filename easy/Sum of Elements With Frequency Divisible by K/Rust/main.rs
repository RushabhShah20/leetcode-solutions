// Problem: Sum of Elements With Frequency Divisible by K
// Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
impl Solution {
    pub fn sum_divisible_by_k(nums: Vec<i32>, k: i32) -> i32 {
        let mut m: std::collections::HashMap<i32, i32> = std::collections::HashMap::new();
        for i in 0..nums.len() {
            *m.entry(nums[i]).or_insert(0) += 1;
        }
        let mut ans: i32 = 0;
        for (key, value) in &m {
            if (value % k == 0) {
                ans += (key * value);
            }
        }
        return ans;
    }
}
