// Problem: Count Pairs Whose Sum is Less than Target
// Link to the problem: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
impl Solution {
    pub fn count_pairs(nums: Vec<i32>, target: i32) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..nums.len() {
            for j in i + 1..nums.len() {
                if nums[i] + nums[j] < target {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
