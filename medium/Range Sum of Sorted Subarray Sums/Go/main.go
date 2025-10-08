// Problem: Range Sum of Sorted Subarray Sums
// Link to the problem: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
func rangeSum(nums []int, n int, left int, right int) int {
	var ans int = 0
	var mod int = 1000000007
	var prefixSum []int
	for i := 0; i < len(nums); i++ {
		var sum int = nums[i]
		prefixSum = append(prefixSum, sum)
		for j := i + 1; j < len(nums); j++ {
			sum = ((sum + nums[j]) % mod)
			prefixSum = append(prefixSum, sum)
		}
	}
	sort.Ints(prefixSum)
	for i := left - 1; i < right; i++ {
		ans = ((ans + prefixSum[i]) % mod)
	}
	return ans
}
