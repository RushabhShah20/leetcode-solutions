// Problem: Find the Duplicate Number
// Link to the problem: https://leetcode.com/problems/find-the-duplicate-number/
func findDuplicate(nums []int) int {
	var ans int = 0
	m := make(map[int]int)
	for _, num := range nums {
		m[num]++
		if m[num] >= 2 {
			ans = num
			break
		}
	}
	return ans
}
