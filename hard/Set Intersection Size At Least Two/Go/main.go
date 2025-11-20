// Problem: Set Intersection Size At Least Two
// Link to the problem: https://leetcode.com/problems/set-intersection-size-at-least-two/
func intersectionSizeTwo(intervals [][]int) int {
	sort.Slice(intervals, func(a int, b int) bool {
		if intervals[a][1] == intervals[b][1] {
			return intervals[a][0] > intervals[b][0]
		} else {
			return intervals[a][1] < intervals[b][1]
		}
	})
	var ans int = 0
	var a int = -1
	var b int = -1
	for _, interval := range intervals {
		var l int = interval[0]
		var r int = interval[1]
		if l > b {
			a = r - 1
			b = r
			ans += 2
		} else if l > a {
			a = b
			b = r
			ans += 1
		}
	}
	return ans
}
