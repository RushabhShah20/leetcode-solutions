// Problem: Max Chunks To Make Sorted
// Link to the problem: https://leetcode.com/problems/max-chunks-to-make-sorted/
func maxChunksToSorted(arr []int) int {
	var ans int = 0
	var n int = len(arr)
	var max int = 0
	for i := 0; i < n; i++ {
		if max < arr[i] {
			max = arr[i]
		}
		if max == i {
			ans++
		}
	}
	return ans
}
