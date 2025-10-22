// Problem: Check if All the Integers in a Range Are Covered
// Link to the problem: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
func isCovered(ranges [][]int, left int, right int) bool {
	var covered []bool = make([]bool, 51)
	for _, i := range ranges {
		for j := i[0]; j <= i[1]; j++ {
			covered[j] = true
		}
	}
	for i := left; i <= right; i++ {
		if covered[i] == false {
			return false
		}
	}
	return true
}
