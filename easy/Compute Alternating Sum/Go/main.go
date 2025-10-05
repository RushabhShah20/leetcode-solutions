// Problem: Compute Alternating Sum
// Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
func alternatingSum(nums []int) int {
	var ans int = 0
	for i := 0; i < len(nums); i++ {
		if i%2 == 0 {
			ans += nums[i]
		} else {
			ans -= nums[i]
		}
	}
	return ans
}
