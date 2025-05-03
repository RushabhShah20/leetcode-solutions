// Problem: Find All Numbers Disappeared in an Array
// Link to the problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
func findDisappearedNumbers(nums []int) []int {
	var ans []int
	var freq []int = make([]int, len(nums))
	for i := 0; i < len(nums); i++ {
		freq[nums[i]-1]++
	}
	for i := 0; i < len(freq); i++ {
		if freq[i] == 0 {
			ans = append(ans, i+1)
		}
	}
	return ans
}
