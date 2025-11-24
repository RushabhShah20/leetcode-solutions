// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
func prefixesDivBy5(nums []int) []bool {
	var rem int = 0
	var ans []bool
	for _, num := range nums {
		rem = (2*rem + num) % 5
		if rem == 0 {
			ans = append(ans, true)
		} else {
			ans = append(ans, false)
		}
	}
	return ans
}
