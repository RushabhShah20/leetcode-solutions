// Problem: Ant on the Boundary
// Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
func returnToBoundaryCount(nums []int) int {
	var ans int = 0
	var count int = 0
	for i := 0; i < len(nums); i++ {
		count += nums[i]
		if count == 0 {
			ans++
		}
	}
	return ans
}
