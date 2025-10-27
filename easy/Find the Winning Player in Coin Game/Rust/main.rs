// Problem: Find the Winning Player in Coin Game
// Link to the problem: https://leetcode.com/problems/find-the-winning-player-in-coin-game/
impl Solution {
    pub fn winning_player(x: i32, y: i32) -> String {
        let ans: i32 = x.min(y / 4);
        if (ans % 2 == 0) {
            return "Bob".to_string();
        } else {
            return "Alice".to_string();
        }
    }
}
