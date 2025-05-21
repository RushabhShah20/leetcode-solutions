// Problem: Single Number II
// Link to the problem: https://leetcode.com/problems/single-number-ii/
func singleNumber(nums []int) int {
	var ans int = 0
	m := make(map[int]int)
	for _, num := range nums {
		m[num]++
	}
	for k, v := range m {
		if v == 1 {
			ans = k
			break
		}
	}
	return ans
}
