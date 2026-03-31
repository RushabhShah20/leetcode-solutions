// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
impl Solution {
    pub fn check_strings(s1: String, s2: String) -> bool {
        let n: usize = s1.len();
        let mut x: Vec<i32> = vec![0; 52];
        let mut y: Vec<i32> = vec![0; 52];
        let s1_bytes = s1.as_bytes();
        let s2_bytes = s2.as_bytes();
        for i in 0..n {
            if (i % 2 == 0) {
                x[(s1_bytes[i] - b'a') as usize] += 1;
                y[(s2_bytes[i] - b'a') as usize] += 1;
            } else {
                x[(s1_bytes[i] - b'a' + 26) as usize] += 1;
                y[(s2_bytes[i] - b'a' + 26) as usize] += 1;
            }
        }
        for i in 0..52 {
            if (x[i] != y[i]) {
                return false;
            }
        }
        return true;
    }
}
