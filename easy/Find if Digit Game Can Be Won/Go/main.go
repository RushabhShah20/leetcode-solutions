// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
func canAliceWin(nums []int) bool {
	var x int = 0
	var y int = 0
	for _, num := range nums {
		if num/10 == 0 {
			x += num
		} else {
			y += num
		}
	}
	return x != y
}
