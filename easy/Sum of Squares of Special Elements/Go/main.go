// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
func sumOfSquares(nums []int) int {
	var n int = len(nums)
	var ans int = 0
	for i := 1; i*i <= n; i++ {
		if n%i == 0 {
			ans += nums[i-1] * nums[i-1]
			if i*i != n {
				ans += nums[n/i-1] * nums[n/i-1]
			}
		}
	}
	return ans
}
