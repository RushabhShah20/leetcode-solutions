// Problem: Furthest Point From Origin
// Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
func abs(n int) int {
	if n >= 0 {
		return n
	} else {
		return -n
	}
}
func furthestDistanceFromOrigin(moves string) int {
	var n int = len(moves)
	var left int = 0
	var right int = 0
	var spaces int = 0
	for i := 0; i < n; i++ {
		if moves[i] == 'L' {
			left++
		} else if moves[i] == 'R' {
			right++
		} else {
			spaces++
		}
	}
	var ans int = spaces + abs(left-right)
	return ans
}
