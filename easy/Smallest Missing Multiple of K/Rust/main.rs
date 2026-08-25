// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
impl Solution {
    pub fn missing_multiple(nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        let mut s: std::collections::HashSet<i32> = std::collections::HashSet::new();
        for i in 0..n {
            s.insert(nums[i]);
        }
        let mut ans: i32 = k;
        while (s.contains(&ans)) {
            ans += k;
        }
        return ans;
    }
}
