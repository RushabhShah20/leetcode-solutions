// Problem: Minimum Amount of Time to Fill Cups
// Link to the problem: https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups/
func smallest(a int, b int, c int) int {
	if a < b {
		if a < c {
			return a
		} else {
			return c
		}
	} else {
		if b < c {
			return b
		} else {
			return c
		}
	}
}
func fillCups(amount []int) int {
	var ans int = 0
	var a int = amount[0]
	var b int = amount[1]
	var c int = amount[2]
	for a > 0 || b > 0 || c > 0 {
		if smallest(a, b, c) == a {
			b--
			c--
		} else if smallest(a, b, c) == b {
			a--
			c--
		} else {
			a--
			b--
		}
		ans++
	}
	return ans
}
