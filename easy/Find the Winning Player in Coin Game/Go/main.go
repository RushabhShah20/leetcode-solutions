// Problem: Find the Winning Player in Coin Game
// Link to the problem: https://leetcode.com/problems/find-the-winning-player-in-coin-game/
func winningPlayer(x int, y int) string {
	var ans int = min(x, y/4)
	if ans%2 == 0 {
		return "Bob"
	} else {
		return "Alice"
	}
}
