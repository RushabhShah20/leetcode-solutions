// Problem: Maximum Containers on a Ship
// Link to the problem: https://leetcode.com/problems/maximum-containers-on-a-ship/
func maxContainers(n int, w int, maxWeight int) int {
	if (int(math.Pow(float64(n), float64(2))) * w) <= maxWeight {
		return int(math.Pow(float64(n), float64(2)))
	} else {
		return (maxWeight / w)
	}
}
