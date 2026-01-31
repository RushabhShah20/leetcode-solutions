// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
impl Solution {
    pub fn next_greatest_letter(letters: Vec<char>, target: char) -> char {
        let n: usize = letters.len();
        let mut l: i32 = 0;
        let mut r: i32 = (n - 1) as i32;
        let mut ans: char = letters[0];
        while (l <= r) {
            let m: usize = (l + (r - l) / 2) as usize;
            if (letters[m] > target) {
                ans = letters[m];
                r = (m - 1) as i32;
            } else {
                l = (m + 1) as i32;
            }
        }
        return ans;
    }
}
