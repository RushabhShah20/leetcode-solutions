// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
impl Solution {
    pub fn escape_ghosts(ghosts: Vec<Vec<i32>>, target: Vec<i32>) -> bool {
        let x: i32 = ((target[0]).abs()) + ((target[1]).abs());
        for ghost in ghosts {
            let y: i32 = ((ghost[0] - target[0]).abs()) + ((ghost[1] - target[1]).abs());
            if (y <= x) {
                return false;
            }
        }
        return true;
    }
}

