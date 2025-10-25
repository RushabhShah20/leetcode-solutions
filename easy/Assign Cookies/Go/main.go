// Problem: Assign Cookies
// Link to the problem: https://leetcode.com/problems/assign-cookies/
func findContentChildren(g []int, s []int) int {
	sort.Ints(g)
	sort.Ints(s)
	var i int = 0
	var j int = 0
	var ans int = 0
	var n int = len(g)
	var m int = len(s)
	for j < m && i < n {
		if g[i] <= s[j] {
			ans++
			i++
		}
		j++
	}
	return ans
}
