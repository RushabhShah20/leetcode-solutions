// Problem: Find N Unique Integers Sum up to Zero
// Link to the problem: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
func sumZero(n int) []int {
	var ans []int = make([]int, n)
	for i := 0; i < n; i++ {
		ans[i] = 2*i - n + 1
	}
	return ans
}
