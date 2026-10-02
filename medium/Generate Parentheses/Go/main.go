// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
func generateParenthesis(n int) []string {
	if n == 0 {
		return []string{""}
	}
	var ans []string
	for i := 0; i < n; i++ {
		var l []string = generateParenthesis(i)
		var r []string = generateParenthesis(n - 1 - i)
		for j := 0; j < len(l); j++ {
			for k := 0; k < len(r); k++ {
				ans = append(ans, "("+l[j]+")"+r[k])
			}
		}
	}
	return ans
}
