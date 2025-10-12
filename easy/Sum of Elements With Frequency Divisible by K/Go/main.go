// Problem: Sum of Elements With Frequency Divisible by K
// Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
func sumDivisibleByK(nums []int, k int) int {
	var m map[int]int = make(map[int]int)
	for _, num := range nums {
		m[num]++
	}
	var ans int = 0
	for key, value := range m {
		if value%k == 0 {
			ans += key * value
		}
	}
	return ans
}
