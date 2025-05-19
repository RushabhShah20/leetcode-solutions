// Problem: Check If It Is a Straight Line
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-straight-line/
func checkStraightLine(coordinates [][]int) bool {
	var x bool = true
	for i := 1; i < len(coordinates)-1; i++ {
		var x1 int = coordinates[i-1][0]
		var x2 int = coordinates[i][0]
		var x3 int = coordinates[i+1][0]
		var y1 int = coordinates[i-1][1]
		var y2 int = coordinates[i][1]
		var y3 int = coordinates[i+1][1]
		if (y2-y1)*(x3-x2) != (y3-y2)*(x2-x1) {
			x = false
			break
		}
	}
	return x
}
