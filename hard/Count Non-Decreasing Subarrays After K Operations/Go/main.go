// Problem: Count Non-Decreasing Subarrays After K Operations
// Link to the problem: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
func countNonDecreasingSubarrays(nums []int, k int) int64 {
	var n int = len(nums)
	var ans int64 = 0
	var x int64 = 0
	var st []int = make([]int, n)
	var a int = 0
	var b int = 0
	var j int = n - 1
	for i := n - 1; i >= 0; i-- {
		for a < b && nums[st[b-1]] < nums[i] {
			b--
			var y int = st[b]
			var r int
			if a < b {
				r = st[b-1]
			} else {
				r = j + 1
			}
			x += int64(r-y) * int64(nums[i]-nums[y])
		}
		st[b] = i
		b++
		for x > int64(k) {
			x -= int64(nums[st[a]] - nums[j])
			if st[a] == j {
				a++
			}
			j--
		}
		ans += int64(j - i + 1)
	}
	return ans
}
