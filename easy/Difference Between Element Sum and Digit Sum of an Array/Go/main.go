// Problem: Difference Between Element Sum and Digit Sum of an Array
// Link to the problem: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
func differenceOfSum(nums []int) int {
	var ele_sum int = 0
	var dig_sum int = 0
	for _, num := range nums {
		ele_sum += num
		for num > 0 {
			dig_sum += (num % 10)
			num /= 10
		}
	}
	if ele_sum > dig_sum {
		return ele_sum - dig_sum
	} else {
		return dig_sum - ele_sum
	}
}