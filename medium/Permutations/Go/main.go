// Problem: Permutations
// Link to the problem: https://leetcode.com/problems/permutations/
func backTrack(nums []int, used []bool, sub []int, ans *[][]int) {
	if len(sub) == len(nums) {
		var temp []int = make([]int, len(sub))
		copy(temp, sub)
		*ans = append(*ans, temp)
		return
	}
	for i := 0; i < len(nums); i++ {
		if used[i] {
			continue
		}
		used[i] = true
		sub = append(sub, nums[i])
		backTrack(nums, used, sub, ans)
		sub = sub[:len(sub)-1]
		used[i] = false
	}
}
func permute(nums []int) [][]int {
	var ans [][]int
	var sub []int
	var used []bool = make([]bool, len(nums))
	backTrack(nums, used, sub, &ans)
	return ans
}
