// Problem: Minimum One Bit Operations to Make Integers Zero
// Link to the problem: https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/
func minimumOneBitOperations(n int) int {
	var ans int = 0
	for n > 0 {
		ans ^= n
		n >>= 1
	}
	return ans
}
