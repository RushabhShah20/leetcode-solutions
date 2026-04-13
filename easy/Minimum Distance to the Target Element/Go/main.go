// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
func abs(x int) int {
	if x >= 0 {
		return x
	} else {
		return -x
	}
}
func getMinDistance(nums []int, target int, start int) int {
	var n int = len(nums)
	var ans int = 1000000000
	for i := 0; i < n; i++ {
		if nums[i] == target {
			ans = min(abs(i-start), ans)
		}
	}
	return ans
}
