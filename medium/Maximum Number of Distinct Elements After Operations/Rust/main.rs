// Problem: Maximum Number of Distinct Elements After Operations
// Link to the problem: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
impl Solution {
    pub fn max_distinct_elements(mut nums: Vec<i32>, k: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut x: i32 = i32::MIN;
        nums.sort();
        for num in &nums {
            let l: i32 = num - k;
            let r: i32 = num + k;
            if (x < l) {
                x = l;
                ans += 1;
            } else if (x < r) {
                x += 1;
                ans += 1;
            }
        }
        return ans;
    }
}
