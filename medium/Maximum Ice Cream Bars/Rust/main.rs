// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
impl Solution {
    pub fn max_ice_cream(costs: Vec<i32>, mut coins: i32) -> i32 {
        let n: usize = costs.len();
        let mut mx: i32 = 0;
        for i in 0..n {
            mx = mx.max(costs[i]);
        }
        let mut a: Vec<i32> = vec![0; (mx + 1) as usize];
        for i in 0..n {
            a[costs[i] as usize] += 1;
        }
        let mut ans: i32 = 0;
        for i in 1..=(mx as usize) {
            if (a[i] == 0) {
                continue;
            }
            if (coins < i as i32) {
                break;
            }
            let x: i32 = a[i].min(coins / (i as i32));
            coins -= (i as i32) * x;
            ans += x;
        }
        return ans;
    }
}
