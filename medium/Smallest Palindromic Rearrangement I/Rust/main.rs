// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
impl Solution {
    pub fn smallest_palindrome(s: String) -> String {
        let n: usize = s.len();
        let mut arr: Vec<u8> = s.into_bytes();
        let mut a: Vec<i32> = vec![0; 26];
        for i in 0..n / 2 {
            a[(arr[i] - b'a') as usize] += 1;
        }
        let mut l: usize = 0;
        let mut r: usize = n - 1;
        for i in 0..26 {
            while a[i] > 0 {
                let c = b'a' + i as u8;
                arr[l] = c;
                arr[r] = c;
                l += 1;
                r -= 1;
                a[i] -= 1;
            }
        }
        return String::from_utf8(arr).unwrap();
    }
}
