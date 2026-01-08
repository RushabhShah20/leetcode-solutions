// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
func getCommon(nums1 []int, nums2 []int) int {
	var m int = len(nums1)
	var n int = len(nums2)
	var i int = 0
	var j int = 0
	for i < m && j < n {
		if nums1[i] > nums2[j] {
			j++
		} else if nums1[i] < nums2[j] {
			i++
		} else {
			return nums1[i]
		}
	}
	return -1
}
