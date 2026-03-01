// Problem: Count of Matches in Tournament
// Link to the problem: https://leetcode.com/problems/count-of-matches-in-tournament/
impl Solution {
    pub fn number_of_matches(n: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut m: i32 = n;
        while (m > 1) {
            if (m % 2 == 0) {
                ans += (m / 2);
                m /= 2;
            } else {
                ans += ((m - 1) / 2);
                m = ((m - 1) / 2) + 1;
            }
        }
        return ans;
    }
}
