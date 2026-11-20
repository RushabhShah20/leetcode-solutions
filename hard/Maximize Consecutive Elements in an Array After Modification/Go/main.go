// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
func maxSelectedElements(nums []int) int {
	var n int = len(nums)
	sort.Ints(nums)
	var a []int = make([]int, 1000001)
	var ans int = 0
	for i := 0; i < n; i++ {
		var x int = nums[i]
		a[x+1] = max(a[x+1], a[x]+1)
		a[x] = max(a[x], a[x-1]+1)
		ans = max(ans, max(a[x], a[x+1]))
	}
	return ans
}
