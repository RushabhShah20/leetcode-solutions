// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
func maximumElementAfterDecrementingAndRearranging(arr []int) int {
	sort.Ints(arr)
	var n int = len(arr)
	var ans int = 1
	for i := 1; i < n; i++ {
		if arr[i] >= ans+1 {
			ans++
		}
	}
	return ans
}
