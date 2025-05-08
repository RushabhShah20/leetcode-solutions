// Problem: Count Pairs Whose Sum is Less than Target
// Link to the problem: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
func countPairs(nums []int, target int) int {
	var ans int = 0
	for i := 0; i < len(nums); i++ {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] < target {
				ans++
			}
		}
	}
	return ans
}
