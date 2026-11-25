// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
func check(a []int, k int) bool {
	var n int = len(a)
	var m map[int64]int = make(map[int64]int)
	const p1 int64 = 31
	const p2 int64 = 37
	const m1 int64 = 1000000007
	const m2 int64 = 1000000009
	var e1 int64 = 1
	var e2 int64 = 1
	var h1 int64 = 0
	var h2 int64 = 0
	for i := 0; i < k; i++ {
		h1 = (h1*p1%m1 + int64(a[i])) % m1
		h2 = (h2*p2%m2 + int64(a[i])) % m2
	}
	for i := 1; i < k; i++ {
		e1 = e1 * p1 % m1
		e2 = e2 * p2 % m2
	}
	var key int64 = h1*m2 + h2
	m[key] = 1
	for i := k; i < n; i++ {
		var x1 int64 = int64(a[i-k]) * e1 % m1
		h1 = (h1 - x1 + m1) % m1
		h1 = (h1*p1%m1 + int64(a[i])) % m1
		var x2 int64 = int64(a[i-k]) * e2 % m2
		h2 = (h2 - x2 + m2) % m2
		h2 = (h2*p2%m2 + int64(a[i])) % m2
		key = h1*m2 + h2
		m[key] = m[key] + 1
	}
	for _, count := range m {
		if count == 1 {
			return false
		}
	}
	return true
}

func smallestUniqueSubarray(nums []int) int {
	var n int = len(nums)
	var ans int = n
	var l int = 1
	var r int = n
	for l <= r {
		var m int = l + (r-l)/2
		if check(nums, m) {
			l = m + 1
		} else {
			ans = m
			r = m - 1
		}
	}
	return ans
}
