// Problem: Sort Colors
// Link to the problem: https://leetcode.com/problems/sort-colors/
func sortColors(nums []int) {
	var zeroes int = 0
	var ones int = 0
	var twos int = 0
	for i := 0; i < len(nums); i++ {
		if nums[i] == 0 {
			zeroes++
		} else if nums[i] == 1 {
			ones++
		} else {
			twos++
		}
	}
	for i := 0; i < len(nums); i++ {
		if zeroes > 0 {
			nums[i] = 0
			zeroes--
		} else if ones > 0 {
			nums[i] = 1
			ones--
		} else {
			nums[i] = 2
			twos--
		}
	}
}
