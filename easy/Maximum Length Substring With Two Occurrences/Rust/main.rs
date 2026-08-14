// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
impl Solution {
    pub fn maximum_length_substring(s: String) -> i32 {
        let s_bytes = s.as_bytes();
        let n: usize = s_bytes.len();
        let mut i: usize = 0;
        let mut j: usize = 0;
        let mut ans: i32 = 0;
        let mut a: Vec<i32> = vec![0; 26];
        while j < n {
            a[(s_bytes[j] - b'a') as usize] += 1;
            while a[(s_bytes[j] - b'a') as usize] > 2 && i < n {
                a[(s_bytes[i] - b'a') as usize] -= 1;
                i += 1;
            }
            ans = ans.max((j - i + 1) as i32);
            j += 1;
        }
        ans
    }
}
