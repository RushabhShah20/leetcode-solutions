// Problem: Minimum Length of String After Deleting Similar Ends
// Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/
impl Solution {
    pub fn minimum_length(s: String) -> i32 {
        let n: usize = s.len();
        let mut i: usize = 0;
        let mut j: usize = n - 1;
        let s_bytes = s.as_bytes();
        while (i < j && s_bytes[i] == s_bytes[j]) {
            let c = s_bytes[i];
            while (i <= j && s_bytes[i] == c) {
                i += 1;
            }
            while (i <= j && s_bytes[j] == c) {
                j -= 1;
            }
        }
        let ans: i32 = (j - i + 1) as i32;
        return ans;
    }
}
