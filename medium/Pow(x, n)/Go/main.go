// Problem: Pow(x, n)
// Link to the problem: https://leetcode.com/problems/powx-n/
func myPow(x float64, n int) float64 {
	var t int64 = int64(n)
	if n == 0 {
		return 1
	}
	if t < 0 {
		t = -1 * t
		x = 1 / x
	}
	if n%2 == 0 {
		return myPow(x*x, int(t/2))
	} else {
		return x * myPow(x, int(t-1))
	}
}
