// Problem: Minimum Cost to Acquire Required Items
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
impl Solution {
    pub fn minimum_cost(cost1: i32, cost2: i32, cost_both: i32, need1: i32, need2: i32) -> i64 {
        let mut ans: i64 = ((need1 as i64) * (cost1 as i64) + (need2 as i64) * (cost2 as i64));
        let minNeed: i64 = need1.min(need2) as i64;
        let maxNeed: i64 = need1.max(need2) as i64;
        ans = ans.min(
            (minNeed) * (cost_both as i64)
                + (need1 as i64 - minNeed) * (cost1 as i64)
                + (need2 as i64 - minNeed) * (cost2 as i64),
        );
        ans = ans.min((maxNeed) * (cost_both as i64));
        return ans;
    }
}
