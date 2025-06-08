// Problem: Find Missing and Repeated Values
// Link to the problem: https://leetcode.com/problems/find-missing-and-repeated-values/
func findMissingAndRepeatedValues(grid [][]int) []int {
	var freq []int = make([]int, len(grid)*len(grid[0]))
	var ans []int = make([]int, 2)
	for i := 0; i < len(grid); i++ {
		for j := 0; j < len(grid[0]); j++ {
			freq[grid[i][j]-1]++
		}
	}
	for i := 0; i < len(freq); i++ {
		if freq[i] == 0 {
			ans[1] = i + 1
		}
		if freq[i] == 2 {
			ans[0] = i + 1
		}
	}
	return ans
}
