// Problem: Find Occurrences of an Element in an Array
// Link to the problem: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
func occurrencesOfElement(nums []int, queries []int, x int) []int {
	var ans []int = make([]int, len(queries))
	var freq []int
	for i := 0; i < len(nums); i++ {
		if nums[i] == x {
			freq = append(freq, i)
		}
	}
	for i := 0; i < len(ans); i++ {
		if queries[i] <= len(freq) {
			ans[i] = freq[queries[i]-1]
		} else {
			ans[i] = -1
		}
	}
	return ans
}
