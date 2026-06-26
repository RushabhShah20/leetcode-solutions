// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
func countMajoritySubarrays(nums []int, target int) int64 {
	var n int = len(nums)
	var pre []int = make([]int, 2*n+1)
	pre[n] = 1
	var x int = n
	var ans int64 = 0
	var y int64 = 0
	for i := 0; i < n; i++ {
		if nums[i] == target {
			y += int64(pre[x])
			x++
			pre[x]++
		} else {
			x--
			y -= int64(pre[x])
			pre[x]++
		}
		ans += y
	}
	return ans
}
