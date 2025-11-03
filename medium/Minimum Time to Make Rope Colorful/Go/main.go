// Problem: Minimum Time to Make Rope Colorful
// Link to the problem: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
func minCost(colors string, neededTime []int) int {
	var n int = len(colors)
	var ans int = 0
	for i := 1; i < n; i++ {
		if colors[i] == colors[i-1] {
			ans += (min(neededTime[i], neededTime[i-1]))
			neededTime[i] = max(neededTime[i], neededTime[i-1])
		}
	}
	return ans
}
