// Problem: Maximum Product of Three Elements After One Replacement
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-elements-after-one-replacement/
func maxProduct(nums []int) int64 {
	var n int = len(nums)
	var ans int64 = 1
	sort.Ints(nums)
	var a int64 = int64(nums[0])
	var b int64 = int64(nums[1])
	var c int64 = int64(nums[n-2])
	var d int64 = int64(nums[n-1])
	var x int64 = 100000
	var arr []int64 = []int64{a * b * x, a * b * -x, a * c * x, a * c * -x, a * d * x, a * d * -x, b * c * x, b * c * -x,
		b * d * x, b * d * -x, c * d * x, c * d * -x}
	ans = slices.Max(arr)
	return ans
}
