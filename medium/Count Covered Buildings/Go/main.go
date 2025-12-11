// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
func countCoveredBuildings(n int, buildings [][]int) int {
	var maxRow []int = make([]int, n+1)
	var minRow []int = make([]int, n+1)
	var maxCol []int = make([]int, n+1)
	var minCol []int = make([]int, n+1)
	for i := 0; i <= n; i++ {
		minCol[i] = n + 1
		minRow[i] = n + 1
	}
	for _, building := range buildings {
		var x int = building[0]
		var y int = building[1]
		maxRow[y] = max(maxRow[y], x)
		minRow[y] = min(minRow[y], x)
		maxCol[x] = max(maxCol[x], y)
		minCol[x] = min(minCol[x], y)
	}
	var ans int = 0
	for _, building := range buildings {
		var x int = building[0]
		var y int = building[1]
		if x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x] {
			ans++
		}
	}
	return ans
}
