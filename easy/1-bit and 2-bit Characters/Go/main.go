// Problem: 1-bit and 2-bit Characters
// Link to the problem: https://leetcode.com/problems/1-bit-and-2-bit-characters/
func isOneBitCharacter(bits []int) bool {
	var n int = len(bits)
	var i int = 0
	for i < n-1 {
		i += bits[i] + 1
	}
	return i == n-1
}
