// Problem: Queries on Number of Points Inside a Circle
// Link to the problem: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
func countPoints(points [][]int, queries [][]int) []int {
	var ans []int = make([]int, len(queries))
	for i := 0; i < len(queries); i++ {
		for j := 0; j < len(points); j++ {
			if (queries[i][2] * queries[i][2]) >= ((queries[i][0]-points[j][0])*(queries[i][0]-points[j][0]) + (queries[i][1]-points[j][1])*(queries[i][1]-points[j][1])) {
				ans[i]++
			}
		}
	}
	return ans
}
