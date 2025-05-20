// Problem: Find the XOR of Numbers Which Appear Twice
// Link to the problem: https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/
func duplicateNumbersXOR(nums []int) int {
	var ans int = 0
	m := make(map[int]int)
	var a []int
	for _, num := range nums {
		m[num]++
	}
	for k, v := range m {
		if v == 2 {
			a = append(a, k)
		}
	}
	for i := 0; i < len(a); i++ {
		ans ^= a[i]
	}
	return ans
}
