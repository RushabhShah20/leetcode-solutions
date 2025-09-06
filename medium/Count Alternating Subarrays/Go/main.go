// Problem: Count Alternating Subarrays
// Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
func countAlternatingSubarrays(nums []int) int64 {
	var ans int64 = 0
	var count int = 1
	var a []int
	for i := 1; i < len(nums); i++ {
		if nums[i] != nums[i-1] {
			count++
		} else {
			a = append(a, count)
			count = 1
		}
	}
	a = append(a, count)
	for i := 0; i < len(a); i++ {
		ans += ((int64(a[i]) * int64(a[i]+1)) / 2)
	}
	return ans
}
