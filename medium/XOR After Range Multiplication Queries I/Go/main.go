// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
func xorAfterQueries(nums []int, queries [][]int) int {
	var mod int64 = 1000000007
	for _, query := range queries {
		for i := query[0]; i <= query[1]; i += query[2] {
			nums[i] = int((int64(nums[i]) * int64(query[3])) % mod)
		}
	}
	var ans int = 0
	for _, num := range nums {
		ans ^= num
	}
	return ans
}
