// Problem: Find the Minimum Amount of Time to Brew Potions
// Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
impl Solution {
    pub fn min_time(skill: Vec<i32>, mana: Vec<i32>) -> i64 {
        let n: usize = skill.len();
        let m: usize = mana.len();
        let mut ans: Vec<i64> = vec![0; n + 1];
        for j in 0..m {
            for i in 0..n {
                ans[i + 1] = ans[i].max(ans[i + 1]) + ((mana[j] as i64) * (skill[i] as i64));
            }
            for i in (1..n).rev() {
                ans[i] = ans[i + 1] - ((mana[j] as i64) * (skill[i] as i64));
            }
        }
        return ans[n];
    }
}
