// Problem: Add Minimum Number of Rungs
// Link to the problem: https://leetcode.com/problems/add-minimum-number-of-rungs/
impl Solution {
    pub fn add_rungs(rungs: Vec<i32>, dist: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut prev: i32 = 0;
        for rung in rungs {
            if ((rung - prev) > dist) {
                if ((rung - prev) % dist == 0) {
                    ans += (((rung - prev) / dist) - 1);
                } else {
                    ans += ((rung - prev) / dist);
                }
            }
            prev = rung;
        }
        return ans;
    }
}
