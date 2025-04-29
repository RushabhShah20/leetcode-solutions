// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
func Abs(x, y int) int {
	if x < y {
		return y - x
	}
	return x - y
}
func findClosest(x int, y int, z int) int {
	if Abs(x, z) < Abs(y, z) {
		return 1
	} else if Abs(x, z) > Abs(y, z) {
		return 2
	} else {
		return 0
	}
}
