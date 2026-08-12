// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
impl Solution {
    pub fn max_subarray_length(nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        let mut i: usize = 0;
        let mut j: usize = 0;
        let mut ans: i32 = 0;
        let mut m: std::collections::HashMap<i32, i32> = std::collections::HashMap::new();
        while (j < n) {
            *m.entry(nums[j]).or_insert(0) += 1;
            while (*m.get(&nums[j]).unwrap() > k && i < n) {
                *m.entry(nums[i]).or_insert(0) -= 1;
                i += 1;
            }
            ans = ans.max((j - i + 1) as i32);
            j += 1;
        }
        return ans;
    }
}
