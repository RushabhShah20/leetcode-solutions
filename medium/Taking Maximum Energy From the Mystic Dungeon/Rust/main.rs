// Problem: Taking Maximum Energy From the Mystic Dungeon
// Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
impl Solution {
    pub fn maximum_energy(energy: Vec<i32>, k: i32) -> i32 {
        let mut n: usize = energy.len();
        let mut ans: i32 = i32::MIN;
        let mut dp: Vec<i32> = vec![0; n];
        for i in (0..n).rev() {
            if (i >= n - (k as usize)) {
                dp[i] = energy[i];
            } else {
                dp[i] = energy[i] + dp[i + (k as usize)];
            }
            ans = ans.max(dp[i]);
        }
        return ans;
    }
}
