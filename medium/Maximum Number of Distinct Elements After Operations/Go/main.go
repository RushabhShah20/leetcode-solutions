// Problem: Maximum Number of Distinct Elements After Operations
// Link to the problem: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
func maxDistinctElements(nums []int, k int) int {
	var ans int = 0
	var x int = math.MinInt
	sort.Ints(nums)
	for _, num := range nums {
		var l int = num - k
		var r int = num + k
		if x < l {
			x = l
			ans++
		} else if x < r {
			x++
			ans++
		}
	}
	return ans
}
