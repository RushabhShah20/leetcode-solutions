// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}
func gcdOfOddEvenSums(n int) int {
	return gcd((n)*(n+1), (int)(math.Pow(float64(n), float64(2))))
}
