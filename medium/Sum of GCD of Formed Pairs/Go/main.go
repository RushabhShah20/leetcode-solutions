// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}
func gcdSum(nums []int) int64 {
	var n int = len(nums)
	var mx int = 0
	var a []int = make([]int, n)
	for i := 0; i < n; i++ {
		mx = max(mx, nums[i])
		a[i] = gcd(mx, nums[i])
	}
	var ans int64 = 0
	sort.Ints(a)
	var l int = 0
	var r int = n - 1
	for l < r {
		ans += int64(gcd(a[l], a[r]))
		l++
		r--
	}
	return ans
}
