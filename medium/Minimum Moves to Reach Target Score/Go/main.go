// Problem: Minimum Moves to Reach Target Score
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-reach-target-score/
func minMoves(target int, maxDoubles int) int {
	if target == 1 {
		return 0
	}
	var ans int = 0
	for maxDoubles > 0 {
		if target%2 == 0 {
			target /= 2
			maxDoubles--
		} else {
			target--
		}
		ans++
		if target == 1 {
			break
		}
	}
	if target != 1 {
		ans += (target - 1)
	}
	return ans
}
