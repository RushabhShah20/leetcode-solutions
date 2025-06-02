// Problem: Type of Triangle
// Link to the problem: https://leetcode.com/problems/type-of-triangle/
func triangleType(nums []int) string {
	var a int = nums[0]
	var b int = nums[1]
	var c int = nums[2]
	if a+b > c && b+c > a && c+a > b {
		if a == b && b == c && c == a {
			return "equilateral"
		} else if a == b || b == c || c == a {
			return "isosceles"
		} else {
			return "scalene"
		}
	}
	return "none"
}
