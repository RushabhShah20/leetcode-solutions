// Problem: Maximum Matching of Players With Trainers
// Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
impl Solution {
    pub fn match_players_and_trainers(mut players: Vec<i32>, mut trainers: Vec<i32>) -> i32 {
        players.sort();
        trainers.sort();
        let mut i: usize = 0;
        let mut j: usize = 0;
        let mut ans: i32 = 0;
        let n: usize = players.len();
        let m: usize = trainers.len();
        while (j < m && i < n) {
            if (players[i] <= trainers[j]) {
                ans += 1;
                i += 1;
            }
            j += 1;
        }
        return ans;
    }
}
