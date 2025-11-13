// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
func abs(x int) int {
	if x <= 0 {
		return -x
	} else {
		return x
	}
}
func escapeGhosts(ghosts [][]int, target []int) bool {
	var x int = (abs(target[0])) + (abs(target[1]))
	for _, ghost := range ghosts {
		var y int = (abs(ghost[0] - target[0])) + (abs(ghost[1] - target[1]))
		if y <= x {
			return false
		}
	}
	return true
}
