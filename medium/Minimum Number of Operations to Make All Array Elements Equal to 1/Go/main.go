// Problem: Minimum Number of Operations to Make All Array Elements Equal to 1
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}
func minOperations(nums []int) int {
	var ans int = 0
	var g int = nums[0]
	for _, num := range nums {
		g = gcd(g, num)
		if g == 1 {
			break
		}
	}
	if g != 1 {
		return -1
	}
	var n int = len(nums)
	var count int = 0
	for _, num := range nums {
		if num == 1 {
			count++
		}
	}
	if count > 0 {
		return n - count
	}
	ans = 1000000000
	for i := 0; i < n; i++ {
		var x int = 0
		for j := i; j < n; j++ {
			x = gcd(x, nums[j])
			if x == 1 {
				ans = min(ans, j-i+1)
				break
			}
		}
	}
	ans = (ans - 1) + (n - 1)
	return ans
}
