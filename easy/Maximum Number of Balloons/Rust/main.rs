// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
impl Solution {
    pub fn max_number_of_balloons(text: String) -> i32 {
        let n: usize = text.len();
        let mut ans: i32 = 100000;
        let mut a: Vec<i32> = vec![0; 26];
        let s = text.as_bytes();
        for i in 0..n {
            a[(s[i] - b'a') as usize] += 1;
        }
        ans = ans.min(a[1]);
        ans = ans.min(a[0]);
        ans = ans.min(a[11] / 2);
        ans = ans.min(a[14] / 2);
        ans = ans.min(a[13]);
        return ans;
    }
}
