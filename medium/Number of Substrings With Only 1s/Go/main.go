// Problem: Number of Substrings With Only 1s
// Link to the problem: https://leetcode.com/problems/number-of-substrings-with-only-1s/
func numSub(s string) int {
	var x []int
	var y int = 0
	for i := 0; i < len(s); i++ {
		if s[i] == '1' {
			y++
		} else {
			x = append(x, y)
			y = 0
		}
	}
	if y != 0 {
		x = append(x, y)
	}
	var ans int = 0
	var mod int = 1e9 + 7
	for i := 0; i < len(x); i++ {
		ans += (int)(((int64(x[i]) * int64(x[i]+1)) / 2) % int64(mod))
	}
	return ans
}
