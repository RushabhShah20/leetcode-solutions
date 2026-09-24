// Problem: Smallest Index With Digit Sum Equal to Index
// Link to the problem: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
func sum(n int) int {
	var ans int = 0
	for n > 0 {
		ans += n % 10
		n /= 10
	}
	return ans
}
func smallestIndex(nums []int) int {
	var n int = len(nums)
	for i := 0; i < n; i++ {
		if sum(nums[i]) == i {
			return i
		}
	}
	return -1
}
