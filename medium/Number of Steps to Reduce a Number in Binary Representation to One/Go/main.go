// Problem: Number of Steps to Reduce a Number in Binary Representation to One
// Link to the problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
func numSteps(s string) int {
	var n int = len(s)
	var ans int = 0
	var x int = 0
	for i := n - 1; i > 0; i-- {
		var y int = int(s[i]-'0') + x
		if y%2 == 0 {
			ans++
		} else {
			ans += 2
			x = 1
		}
	}
	ans += x
	return ans
}
