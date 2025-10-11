// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
func findMaximumScore(nums []int) int64 {
	var ans int64 = 0
	var maxElement int64 = 0
	for i := 0; i < len(nums); i++ {
		ans += maxElement
		maxElement = max(maxElement, int64(nums[i]))
	}
	return ans
}
