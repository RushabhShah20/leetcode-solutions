// Problem: Check If It Is a Good Array
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-good-array/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}
func isGoodArray(nums []int) bool {
	var ans int = nums[0]
	for i := 0; i < len(nums); i++ {
		ans = gcd(ans, nums[i])
		if ans == 1 {
			break
		}
	}
	if ans == 1 {
		return true
	} else {
		return false
	}
}
