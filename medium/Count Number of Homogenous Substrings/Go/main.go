// Problem: Count Number of Homogenous Substrings
// Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/
func countHomogenous(s string) int {
	var mod int = 1000000007
	var count int = 1
	var a []int
	for i := 1; i < len(s); i++ {
		if s[i] == s[i-1] {
			count++
		} else {
			a = append(a, count)
			count = 1
		}
	}
	a = append(a, count)
	var ans int = 0
	for i := 0; i < len(a); i++ {
		ans += (int)((int64(a[i])*int64(a[i]+1))/2) % mod
	}
	return ans
}
