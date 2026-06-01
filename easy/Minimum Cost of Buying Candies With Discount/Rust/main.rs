// Problem: Minimum Cost of Buying Candies With Discount
// Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
impl Solution {
    pub fn minimum_cost(mut cost: Vec<i32>) -> i32 {
        let n: usize = cost.len();
        let mut ans: i32 = 0;
        cost.sort();
        let mut i: i32 = n as i32 - 1;
        while i >= 0 {
            if (i - 1 >= 0) {
                ans += cost[i as usize] + cost[(i - 1) as usize];
            } else {
                ans += cost[i as usize];
            }
            i -= 3;
        }
        return ans;
    }
}
