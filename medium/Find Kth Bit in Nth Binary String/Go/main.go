// Problem: Find Kth Bit in Nth Binary String
// Link to the problem: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
func findKthBit(n int, k int) byte {
	if n == 1 {
		return '0'
	}
	var x int = (1 << n) - 1
	var m int = x/2 + 1
	if k == m {
		return '1'
	}
	if k < m {
		return findKthBit(n-1, k)
	}
	if findKthBit(n-1, x-k+1) == '0' {
		return '1'
	}
	return '0'
}
