// Problem: Prime In Diagonal
// Link to the problem: https://leetcode.com/problems/prime-in-diagonal/
func isPrime(n int) bool {
	var x bool = true
	if n <= 1 {
		return false
	} else {
		for i := 2; i*i <= n; i++ {
			if n%i == 0 {
				x = false
				break
			}
		}
		return x
	}
}
func max(arr []int) int {
	if len(arr) == 0 {
		return -1
	}
	var max int = arr[0]
	for i := 1; i < len(arr); i++ {
		if arr[i] > max {
			max = arr[i]
		}
	}
	return max
}
func diagonalPrime(nums [][]int) int {
	var diagonal_elements []int
	for i := 0; i < len(nums); i++ {
		for j := 0; j < len(nums); j++ {
			if i == j || i+j == len(nums)-1 {
				if isPrime(nums[i][j]) {
					diagonal_elements = append(diagonal_elements, nums[i][j])
				}
			}
		}
	}
	if len(diagonal_elements) == 0 {
		return 0
	} else {
		return max(diagonal_elements)
	}
}
