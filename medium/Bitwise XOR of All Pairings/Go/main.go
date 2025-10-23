// Problem: Bitwise XOR of All Pairings
// Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
func xorAllNums(nums1 []int, nums2 []int) int {
	var m int = len(nums1)
	var n int = len(nums2)
	if m%2 == 0 {
		if n%2 == 0 {
			return 0
		} else {
			var ans int = 0
			for _, num := range nums1 {
				ans ^= num
			}
			return ans
		}
	} else {
		if n%2 == 0 {
			var ans int = 0
			for _, num := range nums2 {
				ans ^= num
			}
			return ans
		} else {
			var x int = 0
			var y int = 0
			for _, num := range nums1 {
				x ^= num
			}
			for _, num := range nums2 {
				y ^= num
			}
			var ans int = x ^ y
			return ans
		}
	}
}
