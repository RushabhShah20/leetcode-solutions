// Problem: Count Subarrays With Majority Element I
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-i/
func countMajoritySubarrays(nums []int, target int) int {
	var ans int = 0
	var n int = len(nums)
	for k := 1; k <= n; k++ {
		var count int = 0
		for i := 0; i < n; i++ {
			if i >= k {
				if nums[i] == target {
					count++
				}
				if nums[i-k] == target {
					count--
				}
			} else {
				if nums[i] == target {
					count++
				}
			}
			if i >= k-1 {
				if 2*count > k {
					ans++
				}
			}
		}
	}
	return ans
}
