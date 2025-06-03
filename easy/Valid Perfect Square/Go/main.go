// Problem: Valid Perfect Square
// Link to the problem: https://leetcode.com/problems/valid-perfect-square/
func isPerfectSquare(num int) bool {
	var s int64 = 1
	var e int64 = int64(num)
	for s <= e {
		var mid int64 = s + (e-s)/2
		if mid*mid == int64(num) {
			return true
		} else if mid*mid > int64(num) {
			e = mid - 1
		} else {
			s = mid + 1
		}
	}
	return false
}
