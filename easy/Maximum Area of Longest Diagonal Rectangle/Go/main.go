// Problem: Maximum Area of Longest Diagonal Rectangle
// Link to the problem: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
func areaOfMaxDiagonal(dimensions [][]int) int {
	var maxDiagonal float64 = -1.0
	var maxArea int = -1
	for i := 0; i < len(dimensions); i++ {
		var l int = dimensions[i][0]
		var b int = dimensions[i][1]
		var diagonal float64 = math.Sqrt((float64)(l*l) + ((float64)(b * b)))
		var area int = l * b
		if diagonal > maxDiagonal {
			maxDiagonal = diagonal
			maxArea = area
		} else if diagonal == maxDiagonal {
			maxArea = max(area, maxArea)
		}
	}
	return maxArea
}
