// Problem: Count Operations to Obtain Zero
// Link to the problem: https://leetcode.com/problems/count-operations-to-obtain-zero/
func countOperations(num1 int, num2 int) int {
	var ans int = 0
	var a int = max(num1, num2)
	var b int = min(num1, num2)
	for a > 0 && b > 0 {
		ans += (a / b)
		a %= b
		var temp int = a
		a = b
		b = temp
	}
	return ans
}
