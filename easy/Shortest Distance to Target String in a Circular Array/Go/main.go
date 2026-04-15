// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
func abs(x int) int {
	if x >= 0 {
		return x
	} else {
		return -x
	}
}
func closestTarget(words []string, target string, startIndex int) int {
	var n int = len(words)
	var ans int = n
	for i := 0; i < n; i++ {
		if words[i] == target {
			var x int = abs(i - startIndex)
			ans = min(ans, min(x, n-x))
		}
	}
	if ans == n {
		return -1
	} else {
		return ans
	}
}
