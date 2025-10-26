// Problem: Build Array from Permutation
// Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
func buildArray(nums []int) []int {
	var ans []int = make([]int, len(nums))
	ans[0] = nums[nums[0]]
	for i := 0; i < len(nums); i++ {
		ans[i] = nums[nums[i]]
	}
	return ans
}
