// Problem: Single Element in a Sorted Array
// Link to the problem: https://leetcode.com/problems/single-element-in-a-sorted-array/
func singleNonDuplicate(nums []int) int {
	var ans int = 0
	m := make(map[int]int)
	for _, num := range nums {
		m[num]++
	}
	for key, value := range m {
		if value == 1 {
			ans = key
		}
	}
	return ans
}
