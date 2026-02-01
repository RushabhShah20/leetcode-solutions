// Problem: Divide an Array Into Subarrays With Minimum Cost I
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
func minimumCost(nums []int) int {
	var n int = len(nums)
	var m1 int = 51
	var m2 int = 51
	for i := 1; i < n; i++ {
		if nums[i] < m1 {
			m2 = m1
			m1 = nums[i]
		} else if nums[i] < m2 {
			m2 = nums[i]
		}
	}
	var ans int = nums[0] + m1 + m2
	return ans
}
