// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
function minimumChanges(s: string, k: number): number {
    const n: number = s.length;
    const a: number[][] = Array.from({ length: n }, () => new Array(n).fill(0));
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            const m: number = j - i + 1;
            let x: number = m;
            for (let p = 1; p < m; p++) {
                if (m % p !== 0) {
                    continue;
                }
                let y: number = 0;
                for (let q = 0; q < p; q++) {
                    let l = i + q;
                    let r = j - p + q + 1;
                    while (l < r) {
                        if (s[l] !== s[r]) {
                            y++;
                        }
                        l += p;
                        r -= p;
                    }
                }
                x = Math.min(x, y);
            }
            a[i][j] = x;
        }
    }
    const dp: number[][] = Array.from({ length: n }, () => new Array(k + 1).fill(n));
    for (let i = 1; i < n; i++) {
        dp[i][1] = a[0][i];
    }
    for (let i = 0; i < n; i++) {
        for (let p = 2; p <= k; p++) {
            for (let j = (p - 1) << 1; j < i; j++) {
                dp[i][p] = Math.min(dp[i][p], dp[j - 1][p - 1] + a[j][i]);
            }
        }
    }
    const ans: number = dp[n - 1][k];
    return ans;
};