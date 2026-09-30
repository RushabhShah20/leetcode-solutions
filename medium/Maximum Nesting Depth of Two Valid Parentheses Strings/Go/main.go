// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
func maxDepthAfterSplit(seq string) []int {
	var n int = len(seq)
	var ans []int = make([]int, n)
	for i := 0; i < n; i++ {
		if seq[i] == '(' {
			ans[i] = (i & 1) ^ 1
		} else {
			ans[i] = (i & 1)
		}
	}
	return ans
}
