// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
impl Solution {
    pub fn climb_stairs(n: i32, costs: Vec<i32>) -> i32 {
        let mut a: i32 = 0;
        let mut b: i32 = 0;
        let mut c: i32 = 0;
        for i in 0..n {
            let d: i32 = (a + 9).min((b + 4).min(c + 1)) + costs[i as usize];
            a = b;
            b = c;
            c = d;
        }
        let ans: i32 = c;
        return ans;
    }
}
