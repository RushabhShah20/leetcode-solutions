// Problem: Add Minimum Number of Rungs
// Link to the problem: https://leetcode.com/problems/add-minimum-number-of-rungs/
func addRungs(rungs []int, dist int) int {
	var ans int = 0
	var prev int = 0
	for _, rung := range rungs {
		if (rung - prev) > dist {
			if (rung-prev)%dist == 0 {
				ans += (((rung - prev) / dist) - 1)
			} else {
				ans += ((rung - prev) / dist)
			}
		}
		prev = rung
	}
	return ans
}
