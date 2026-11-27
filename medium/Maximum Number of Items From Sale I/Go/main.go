// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
func maximumSaleItems(items [][]int, budget int) int {
	var n int = len(items)
	var a []int = make([]int, budget+1)
	var x int = 1000000000
	for i := 0; i < n; i++ {
		var y int = items[i][0]
		var z int = items[i][1]
		x = min(x, z)
		var b int = 0
		for j := 0; j < n; j++ {
			if items[j][0]%y == 0 {
				b++
			}
		}
		for j := budget; j >= z; j-- {
			a[j] = max(a[j], a[j-z]+b)
		}
	}
	var ans int = 0
	for i := 0; i <= budget; i++ {
		ans = max(ans, a[i]+(budget-i)/x)
	}
	return ans
}
