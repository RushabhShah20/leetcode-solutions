// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
func sortArrayByParity(nums []int) []int {
	var ans []int
	var even []int
	var odd []int
	for _, num := range nums {
		if num%2 == 0 {
			even = append(even, num)
		} else {
			odd = append(odd, num)
		}
	}
	for _, num := range even {
		ans = append(ans, num)
	}
	for _, num := range odd {
		ans = append(ans, num)
	}
	return ans
}
