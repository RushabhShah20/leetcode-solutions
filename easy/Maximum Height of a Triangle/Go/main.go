// Problem: Maximum Height of a Triangle
// Link to the problem: https://leetcode.com/problems/maximum-height-of-a-triangle/
func maxHeightOfTriangle(red int, blue int) int {
	var x int = 0
	var y int = 0
	var a int = red
	var b int = blue
	var i int = 1
	for a >= 0 && b >= 0 {
		if i%2 == 0 {
			a -= i
			x++
		} else {
			b -= i
			x++
		}
		i++
	}
	a = red
	b = blue
	i = 1
	for a >= 0 && b >= 0 {
		if i%2 == 0 {
			b -= i
			y++
		} else {
			a -= i
			y++
		}
		i++
	}
	var ans int = max(x-1, y-1)
	return ans
}
