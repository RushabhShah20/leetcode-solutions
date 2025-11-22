// Problem: Minimum Operations to Make Binary Array Elements Equal to One II
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/
func minOperations(nums []int) int {
	var ans int = 0
	for _, num := range nums {
		if ans%2 == 0 {
			if num == 0 {
				ans++
			}
		} else {
			if num == 1 {
				ans++
			}
		}
	}
	return ans
}
