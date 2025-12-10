// Problem: Count the Number of Computer Unlocking Permutations
// Link to the problem: https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations/
impl Solution {
    pub fn count_permutations(complexity: Vec<i32>) -> i32 {
        let n: usize = complexity.len();
        let mut ans: i64 = 1;
        let MOD: i64 = 1000000007;
        for i in 1..n {
            if (complexity[i] <= complexity[0]) {
                return 0;
            } else {
                ans = ((ans * (i as i64)) % MOD);
            }
        }
        return ans as i32;
    }
}
