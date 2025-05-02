// Problem: Median of Two Sorted Arrays
// Link to the problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	var ans []int
	ans = append(ans, nums1...)
	ans = append(ans, nums2...)
	sort.Ints(ans)
	if len(ans)%2 == 0 {
		return float64((float64(ans[len(ans)/2]) + float64(ans[(len(ans)/2)-1])) / 2)
	} else {
		return float64(ans[len(ans)/2])
	}
}
