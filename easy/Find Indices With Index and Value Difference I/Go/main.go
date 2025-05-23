// Problem: Find Indices With Index and Value Difference I
// Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
func Abs(x, y int) int {
	if x < y {
		return y - x
	}
	return x - y
}
func findIndices(nums []int, indexDifference int, valueDifference int) []int {
	var ans []int = make([]int, 2)
	ans[0] = -1
	ans[1] = -1
	for i := 0; i < len(nums); i++ {
		for j := 0; j < len(nums); j++ {
			if Abs(i, j) >= indexDifference && Abs(nums[i], nums[j]) >= valueDifference {
				ans[0] = i
				ans[1] = j
				break
			}
		}
	}
	return ans
}
