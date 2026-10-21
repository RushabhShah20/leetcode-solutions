// Problem: Minimum Operations to Sort a String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
impl Solution {
    pub fn min_operations(s: String) -> i32 {
        let n: usize = s.len();
        let mut mn: u8 = b'z';
        let mut mx: u8 = b'a';
        let mut a: bool = true;
        let t = s.as_bytes();
        for i in 0..n {
            if (mx < t[i]) {
                mx = t[i];
            }
            if (mn > t[i]) {
                mn = t[i];
            }
            if (i > 0 && t[i - 1] > t[i]) {
                a = false;
            }
        }
        if (a) {
            return 0;
        }
        if (n == 2) {
            return -1;
        }
        if (t[0] == mn || t[n - 1] == mx) {
            return 1;
        }
        for i in 1..n - 1 {
            if (t[i] == mn || t[i] == mx) {
                return 2;
            }
        }
        return 3;
    }
}
