// Problem: Find Numbers with Even Number of Digits
// Link to the problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
func findNumbers(nums []int) int {
	var ans int = 0
	for i := 0; i < len(nums); i++ {
		var n int = nums[i]
		var count int = 0
		for n != 0 {
			count++
			n /= 10
		}
		if count%2 == 0 {
			ans++
		}
	}
	return ans
}
