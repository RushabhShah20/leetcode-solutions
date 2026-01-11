// Problem: Reverse Bits
// Link to the problem: https://leetcode.com/problems/reverse-bits/
func reverseBits(n int) int {
	var ans int = 0
	for i := 0; i < 32; i++ {
		ans <<= 1
		ans |= (n & 1)
		n >>= 1
	}
	return ans
}
