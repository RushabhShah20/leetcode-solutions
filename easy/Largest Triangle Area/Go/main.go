// Problem: Largest Triangle Area
// Link to the problem: https://leetcode.com/problems/largest-triangle-area/
func abs(x int) int {
	if x < 0 {
		return -1 * x
	}
	return x
}
func largestTriangleArea(points [][]int) float64 {
	var ans float64 = 0
	var n int = len(points)
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			for k := j + 1; k < n; k++ {
				var x1 int = points[i][0]
				var x2 int = points[j][0]
				var x3 int = points[k][0]
				var y1 int = points[i][1]
				var y2 int = points[j][1]
				var y3 int = points[k][1]
				var area float64 = 0.5 * float64(abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)))
				ans = max(ans, area)
			}
		}
	}
	return ans
}
