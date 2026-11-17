// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
impl Solution {
    pub fn minimum_changes(s: String, k: i32) -> i32 {
        let bytes: &[u8] = s.as_bytes();
        let n: usize = bytes.len();
        let k: usize = k as usize;
        let mut a: Vec<Vec<usize>> = vec![vec![0usize; n]; n];
        for i in 0..n {
            for j in (i + 1)..n {
                let m: usize = j - i + 1;
                let mut x: usize = m;
                for p in 1..m {
                    if m % p != 0 {
                        continue;
                    }
                    let mut y: usize = 0;
                    let step: isize = p as isize;
                    for q in 0..p {
                        let mut l: isize = (i + q) as isize;
                        let mut r: isize = (j + q + 1 - p) as isize;
                        while l < r {
                            if bytes[l as usize] != bytes[r as usize] {
                                y += 1;
                            }
                            l += step;
                            r -= step;
                        }
                    }
                    x = x.min(y);
                }
                a[i][j] = x;
            }
        }
        let mut dp: Vec<Vec<usize>> = vec![vec![n; k + 1]; n];
        for i in 1..n {
            dp[i][1] = a[0][i];
        }
        for i in 0..n {
            for p in 2..=k {
                for j in ((p - 1) << 1)..i {
                    let x: usize = dp[j - 1][p - 1] + a[j][i];
                    dp[i][p] = dp[i][p].min(x);
                }
            }
        }
        let ans: usize = dp[n - 1][k];
        return ans as i32;
    }
}
