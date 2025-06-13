// Problem: Maximum Containers on a Ship
// Link to the problem: https://leetcode.com/problems/maximum-containers-on-a-ship/
impl Solution {
    pub fn max_containers(n: i32, w: i32, max_weight: i32) -> i32 {
        if ((n.pow(2) * w) <= max_weight) {
            return (n.pow(2));
        } else {
            return (max_weight / w);
        }
    }
}
