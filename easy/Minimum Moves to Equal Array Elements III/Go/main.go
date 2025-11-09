// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
func minMoves(nums []int) int {
	var ans int = 0
	var x int = 0
	for _, num := range nums {
		if x < num {
			x = num
		}
	}
	for _, num := range nums {
		ans += (x - num)
	}
	return ans
}
