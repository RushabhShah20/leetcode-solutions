// Problem: Smallest Divisible Digit Product I
// Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-i/
package main

func getProduct(n int) int {
	var product int = 1
	for n != 0 {
		product = product * (n % 10)
		n = n / 10
	}
	return product
}
func smallestNumber(n int, t int) int {
	var ans int = n
	for i := n; i <= n+(10-(n%10)); i++ {
		if getProduct(i)%t == 0 {
			ans = i
			break
		}
	}
	return ans
}
