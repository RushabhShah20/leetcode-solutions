// Problem: Valid Boomerang
// Link to the problem: https://leetcode.com/problems/valid-boomerang/
func isBoomerang(points [][]int) bool {
	var x1 int = points[0][0]
	var x2 int = points[1][0]
	var x3 int = points[2][0]
	var y1 int = points[0][1]
	var y2 int = points[1][1]
	var y3 int = points[2][1]
	if (x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1) {
		return false
	} else {
		if (y2-y1)*(x3-x2) != (y3-y2)*(x2-x1) {
			return true
		} else {
			return false
		}
	}
}
