// Problem: Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/number-of-1-bits/
func hammingWeight(n int) int {
	var ans int = 0
	for n != 0 {
		n &= (n - 1)
		ans++
	}
	return ans
}
