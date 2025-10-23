// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
impl Solution {
    pub fn has_same_digits(mut s: String) -> bool {
        while (s.len() != 2) {
            let mut t: String = String::new();
            let s_bytes = s.as_bytes();
            for i in 0..s_bytes.len() - 1 {
                let x: i32 = (s_bytes[i] - b'0') as i32;
                let y: i32 = (s_bytes[i + 1] - b'0') as i32;
                let z: i32 = (x + y) % 10;
                let a: char = (z as u8 + b'0') as char;
                t.push(a);
            }
            s = t;
        }
        return s.chars().nth(0).unwrap() == s.chars().nth(1).unwrap();
    }
}
