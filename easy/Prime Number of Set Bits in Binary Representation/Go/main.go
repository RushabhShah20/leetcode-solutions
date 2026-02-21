// Problem: Prime Number of Set Bits in Binary Representation
// Link to the problem: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
func isPrime(n int) bool {
	if n == 1 {
		return false
	}
	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}
func setBits(n int) int {
	var ans int = 0
	for n > 0 {
		n &= (n - 1)
		ans++
	}
	return ans
}
func countPrimeSetBits(left int, right int) int {
	var ans int = 0
	for i := left; i <= right; i++ {
		if isPrime(setBits(i)) {
			ans++
		}
	}
	return ans
}
