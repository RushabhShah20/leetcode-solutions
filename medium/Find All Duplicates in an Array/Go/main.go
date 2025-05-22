// Problem: Find All Duplicates in an Array
// Link to the problem: https://leetcode.com/problems/find-all-duplicates-in-an-array/
func findDuplicates(nums []int) []int {
	var ans []int
	m := make(map[int]int)
	for _, num := range nums {
		m[num]++
	}
	for k, v := range m {
		if v == 2 {
			ans = append(ans, k)
		}
	}
	return ans
}
