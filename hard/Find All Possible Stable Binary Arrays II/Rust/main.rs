// Problem: Find All Possible Stable Binary Arrays II
// Link to the problem: https://leetcode.com/problems/find-all-possible-stable-binary-arrays-ii/
impl Solution {
    pub fn number_of_stable_arrays(zero: i32, one: i32, limit: i32) -> i32 {
        let MOD: i64 = 1000000007;
        let mut dp: Vec<Vec<[i64; 2]>> =
            vec![vec![[0i64; 2]; (one + 1) as usize]; (zero + 1) as usize];
        for i in 0..=(zero as usize).min(limit as usize) {
            dp[i][0][0] = 1;
        }
        for j in 0..=(one as usize).min(limit as usize) {
            dp[0][j][1] = 1;
        }
        for i in 1..=(zero as usize) {
            for j in 1..=(one as usize) {
                if (i > (limit as usize)) {
                    dp[i][j][0] = (dp[i - 1][j][0] + dp[i - 1][j][1]
                        - dp[i - (limit as usize) - 1][j][1])
                        % MOD;
                } else {
                    dp[i][j][0] = (dp[i - 1][j][0] + dp[i - 1][j][1]) % MOD;
                }
                dp[i][j][0] = (dp[i][j][0] + MOD) % MOD;
                if (j > (limit as usize)) {
                    dp[i][j][1] = (dp[i][j - 1][0] + dp[i][j - 1][1]
                        - dp[i][j - (limit as usize) - 1][0])
                        % MOD;
                } else {
                    dp[i][j][1] = (dp[i][j - 1][0] + dp[i][j - 1][1]) % MOD;
                }
                dp[i][j][1] = (dp[i][j][1] + MOD) % MOD;
            }
        }
        let ans: i32 = ((dp[zero as usize][one as usize][0] + dp[zero as usize][one as usize][1])
            % MOD) as i32;
        return ans;
    }
}
