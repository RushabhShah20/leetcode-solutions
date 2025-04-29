// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
func pivotArray(nums []int, pivot int) []int {
	var ans []int
	var less []int
	var equal []int
	var greater []int
	for i := 0; i < len(nums); i++ {
		if nums[i] < pivot {
			less = append(less, nums[i])
		} else if nums[i] > pivot {
			greater = append(greater, nums[i])
		} else {
			equal = append(equal, nums[i])
		}
	}
	ans = append(append(less, equal...), greater...)
	return ans
}
