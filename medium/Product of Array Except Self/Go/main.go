// Problem: Product of Array Except Self
// Link to the problem: https://leetcode.com/problems/product-of-array-except-self/
func productExceptSelf(nums []int) []int {
	var prefix []int = make([]int, len(nums))
	var suffix []int = make([]int, len(nums))
	var ans []int = make([]int, len(nums))
	prefix[0] = 1
	for i := 1; i < len(nums); i++ {
		if prefix[i-1] == 0 {
			prefix[i] = 0
		} else {
			prefix[i] = prefix[i-1] * nums[i-1]
		}
	}
	suffix[len(nums)-1] = 1
	for i := len(nums) - 2; i >= 0; i-- {
		if suffix[i+1] == 0 {
			suffix[i] = 0
		} else {
			suffix[i] = suffix[i+1] * nums[i+1]
		}
	}
	for i := 0; i < len(nums); i++ {
		ans[i] = prefix[i] * suffix[i]
	}
	return ans
}
