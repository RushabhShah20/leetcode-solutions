// Problem: Count Beautiful Substrings I
// Link to the problem: https://leetcode.com/problems/count-beautiful-substrings-i/
impl Solution {
    pub fn beautiful_substrings(s: String, k: i32) -> i32 {
        let mut ans: i32 = 0;
        let n: usize = s.len();
        let s_bytes = s.as_bytes();
        for i in 0..n {
            let mut vowels: i32 = 0;
            let mut consonents: i32 = 0;
            for j in i..n {
                if (s_bytes[j] == b'a'
                    || s_bytes[j] == b'e'
                    || s_bytes[j] == b'i'
                    || s_bytes[j] == b'o'
                    || s_bytes[j] == b'u')
                {
                    vowels += 1;
                } else {
                    consonents += 1;
                }
                if ((vowels == consonents) && (vowels * consonents) % k == 0) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
