// Problem: Minimum Changes To Make Alternating Binary String
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
impl Solution {
    pub fn min_operations(s: String) -> i32 {
        let n: usize = s.len();
        let mut ansEven: i32 = 0;
        let mut ansOdd: i32 = 0;
        let s_bytes = s.as_bytes();
        for i in 0..n {
            if (i % 2 == 0) {
                if (s_bytes[i] == b'0') {
                    ansEven += 1;
                } else {
                    ansOdd += 1;
                }
            } else {
                if (s_bytes[i] == b'1') {
                    ansEven += 1;
                } else {
                    ansOdd += 1;
                }
            }
        }
        let ans: i32 = ansEven.min(ansOdd);
        return ans;
    }
}
