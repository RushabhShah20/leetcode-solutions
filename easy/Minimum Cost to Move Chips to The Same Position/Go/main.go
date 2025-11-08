// Problem: Minimum Cost to Move Chips to The Same Position
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
func minCostToMoveChips(position []int) int {
	var even int = 0
	var odd int = 0
	for _, i := range position {
		if i%2 == 0 {
			even++
		} else {
			odd++
		}
	}
	var ans int = min(even, odd)
	return ans
}
