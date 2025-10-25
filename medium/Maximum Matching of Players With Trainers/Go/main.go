// Problem: Maximum Matching of Players With Trainers
// Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
func matchPlayersAndTrainers(players []int, trainers []int) int {
	sort.Ints(players)
	sort.Ints(trainers)
	var i int = 0
	var j int = 0
	var ans int = 0
	var n int = len(players)
	var m int = len(trainers)
	for j < m && i < n {
		if players[i] <= trainers[j] {
			ans++
			i++
		}
		j++
	}
	return ans
}