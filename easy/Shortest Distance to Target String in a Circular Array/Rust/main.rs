// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
impl Solution {
    pub fn closest_target(words: Vec<String>, target: String, start_index: i32) -> i32 {
        let n: usize = words.len();
        let mut ans: i32 = n as i32;
        for i in 0..n {
            if (words[i] == target) {
                let x: i32 = (i as i32 - start_index).abs();
                ans = ans.min(x.min(n as i32 - x));
            }
        }
        if (ans == n as i32) {
            return -1;
        } else {
            return ans;
        }
    }
}
