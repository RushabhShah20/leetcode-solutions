// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
func minimumOperations(nums []int) int {
	var ans int = 0
	for _, num := range nums {
		if num%3 != 0 {
			ans += 1
		}
	}
	return ans
}
