// Problem: Minimum Number of Pushes to Type Word II
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
impl Solution {
    pub fn minimum_pushes(word: String) -> i32 {
        let n: usize = word.len();
        let mut a: Vec<i32> = vec![0; 26];
        for b in word.bytes() {
            a[(b - b'a') as usize] += 1;
        }
        a.sort_by(|x, y| y.cmp(x));
        let mut ans: i32 = 0;
        for i in 0..26 {
            if (i < 8) {
                ans += (1 * a[i]);
            } else if (i >= 8 && i < 16) {
                ans += (2 * a[i]);
            } else if (i >= 16 && i < 24) {
                ans += (3 * a[i]);
            } else {
                ans += (4 * a[i]);
            }
        }
        return ans;
    }
}
