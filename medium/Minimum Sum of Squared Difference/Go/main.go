// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
func abs(n int) int {
	if n <= 0 {
		return -n
	}
	return n
}

func minSumSquareDiff(nums1 []int, nums2 []int, k1 int, k2 int) int64 {
	var n int = len(nums1)
	var ans int64 = 0
	var k int = k1 + k2
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		nums1[i] = abs(nums1[i] - nums2[i])
		x = max(x, nums1[i])
	}
	var l int = 0
	var r int = x
	for l <= r {
		var m int = (l + r) >> 1
		var a int64 = 0
		for i := 0; i < n; i++ {
			if nums1[i] > m {
				a += int64(nums1[i] - m)
			}
		}
		var z bool = a <= int64(k)
		if z {
			y = m
			r = m - 1
		} else {
			l = m + 1
		}
	}
	for i := 0; i < n; i++ {
		if nums1[i] > y {
			k -= nums1[i] - y
		}
	}
	sort.Ints(nums1)
	for i := n - 1; i >= 0; i-- {
		var b int64 = int64(min(y, nums1[i]))
		if k > 0 && b > 0 {
			k--
			b--
		}
		ans += b * b
	}
	return ans
}
