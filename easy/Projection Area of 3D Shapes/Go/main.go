// Problem: Projection Area of 3D Shapes
// Link to the problem: https://leetcode.com/problems/projection-area-of-3d-shapes/
func projectionArea(grid [][]int) int {
	var n int = len(grid)
	var ans int = 0
	for i := 0; i < n; i++ {
		var a int = 0
		var b int = 0
		for j := 0; j < n; j++ {
			a = max(a, grid[i][j])
			b = max(b, grid[j][i])
			if grid[i][j] > 0 {
				ans++
			}
		}
		ans += (a + b)
	}
	return ans
}
