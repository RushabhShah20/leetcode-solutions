// Problem: Find Center of Star Graph
// Link to the problem: https://leetcode.com/problems/find-center-of-star-graph/
impl Solution {
    pub fn find_center(edges: Vec<Vec<i32>>) -> i32 {
        let a: i32 = edges[0][1];
        let b: i32 = edges[0][0];
        if (edges[1][1] == a || edges[1][0] == a) {
            return a;
        } else {
            return b;
        }
    }
}
