// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
func maximumSaleItems(items [][]int, budget int) int {
	var n int = len(items)
	sort.Slice(items, func(p int, q int) bool {
		return items[p][1] < items[q][1]
	})
	var mx int = 0
	for i := 0; i < n; i++ {
		if items[i][0] > mx {
			mx = items[i][0]
		}
	}
	var a []int = make([]int, mx+1)
	for i := 0; i < n; i++ {
		a[items[i][0]]++
	}
	for i := 1; i <= mx; i++ {
		if a[i] > 0 {
			for j := i << 1; j <= mx; j += i {
				a[i] += a[j]
			}
		}
	}
	var mn int = items[0][1]
	var ans int = 0
	for i := 0; i < n; i++ {
		var x int = items[i][0]
		var y int = items[i][1]
		if y-mn > mn {
			break
		}
		var b int = a[x] - 1
		var c int = budget / y
		if b < c {
			c = b
		}
		ans += c << 1
		budget -= c * y
	}
	ans += budget / mn
	return ans
}
