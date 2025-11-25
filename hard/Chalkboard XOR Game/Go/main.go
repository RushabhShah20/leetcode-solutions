// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
func xorGame(nums []int) bool {
	var total int = 0
	var n int = len(nums)
	for _, num := range nums {
		total ^= num
	}
	var a bool = total == 0
	var b bool = n%2 == 0
	var ans bool = a || b
	return ans
}
