// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
func findThePrefixCommonArray(A []int, B []int) []int {
	var n int = len(A)
	var m []int = make([]int, n+1)
	var ans []int = make([]int, n)
	var x int = 0
	for i := 0; i < n; i++ {
		m[A[i]]++
		if m[A[i]] == 2 {
			x++
		}
		m[B[i]]++
		if m[B[i]] == 2 {
			x++
		}
		ans[i] = x
	}
	return ans
}
